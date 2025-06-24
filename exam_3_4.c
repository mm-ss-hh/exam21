#include <stdio.h>

int main(void){
    int A, B, C;
    int cnt;

    cnt = scanf("%d %d %d", &A, &B, &C);
    if(cnt != 3 || getchar() != '\n') {
        printf("n/a");
        return 0;
    }
    (C > A && C < B) || (C < A && C > B) ? printf("1") : printf("0");
    return 0;
}
