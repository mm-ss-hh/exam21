#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) {
        printf("n/a");
        return 0;
    }

    int umn = 1;
    int non = 0;
    int n = abs(num);

    do {
        int dig = n % 10;
        if (dig % 2 != 0) {
            umn *= dig;
            non = 1;
        }
        n /= 10;
    } while (n > 0);

    printf("%d", non ? umn : 0);
    return 0;
}
