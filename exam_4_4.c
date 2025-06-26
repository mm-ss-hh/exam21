#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) {
        printf("n/a");
        return 0;
    }

    int max_digit = 0;
    int n = abs(num);

    if (n == 0) {
        max_digit = 0;
    } else {
        while (n > 0) {
            int digit = n % 10;
            if (digit > max_digit) {
                max_digit = digit;
            }
            n = n / 10;
        }
    }

    printf("%d", max_digit);
    return 0;
}
