#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    // Чтение размерности векторов
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("n/a");
        return 0;
    }

    // Выделение памяти для векторов
    int *vector1 = (int *)malloc(n * sizeof(int));
    int *vector2 = (int *)malloc(n * sizeof(int));
    
    if (vector1 == NULL || vector2 == NULL) {
        printf("n/a");
        free(vector1);
        free(vector2);
        return 0;
    }

    // Чтение первого вектора
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &vector1[i]) != 1) {
            printf("n/a");
            free(vector1);
            free(vector2);
            return 0;
        }
    }

    // Чтение второго вектора
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &vector2[i]) != 1) {
            printf("n/a");
            free(vector1);
            free(vector2);
            return 0;
        }
    }

    // Вычисление скалярного произведения
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += vector1[i] * vector2[i];
    }

    // Вывод результата
    printf("%d", result);

    // Освобождение памяти
    free(vector1);
    free(vector2);

    return 0;
}
