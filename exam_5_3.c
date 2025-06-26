#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *temp = NULL;
    int capacity = 0;
    int num;
    int reading = 1;
    
    while (reading) {
        if (scanf("%d", &num) != 1) {
            printf("n/a");
            free(temp);
            return 0;
        }
        
        if (num == -1) {
            reading = 0;
        } 
        else if (num < 0) {
            printf("n/a");
            free(temp);
            return 0;
        }
        else {
            int *new_temp = (int*)realloc(temp, (capacity + 1) * sizeof(int));
            if (new_temp == NULL) {
                free(temp);
                printf("n/a");
                return 0;
            }
            temp = new_temp;
            temp[capacity++] = num;
        }
    }

    if (capacity == 0) {
        free(temp);
        return 0;
    }

    for (int i = capacity - 1; i >= 0; i--) {
        printf("%d", temp[i]);
        if (i > 0) printf(" ");
    }

    free(temp);
    return 0;
}
