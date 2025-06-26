#include <stdio.h>

int main() {
    int num;
    int max = -1;

    while (num != -1) {
        if(scanf("%d", &num) != 1){
            printf("n/a");
            return 1;
        }

        if (num > max) {
            max = num;
        }

    }
    printf("%d", max);
    return 0;
}
