#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("n/a");
        return 0;
    }

    int **matrix = (int **)malloc(n * sizeof(int *));
    if (matrix == NULL) {
        printf("n/a");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
        if (matrix[i] == NULL) {
            for (int j = 0; j < i; j++) free(matrix[j]);
            free(matrix);
            printf("n/a");
            return 0;
        }
    }

    int num = 1;
    int top = 0, bottom = n-1, left = 0, right = n-1;

    while (num <= n*n) {
        for (int i = left; i <= right; i++) matrix[top][i] = num++;
        top++;

        for (int i = top; i <= bottom; i++) matrix[i][right] = num++;
        right--;

        for (int i = right; i >= left; i--) matrix[bottom][i] = num++;
        bottom--;

        for (int i = bottom; i >= top; i--) matrix[i][left] = num++;
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", matrix[i][j]);
            if (j < n-1) printf(" ");
        }
        if (i < n-1) printf("\n");
    }

    for (int i = 0; i < n; i++) free(matrix[i]);
    free(matrix);

    return 0;
}
