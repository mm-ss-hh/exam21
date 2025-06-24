#include <stdio.h>
#include <math.h>

#define rad 57.29

int main(void){

float a;

if (scanf("%f", &a) != 1){
    printf("n/a");
    return 0;
}
if (a < 0) {
    printf("n/a");
    return 0;
}
float res = rad * a;
int rres = round(res);
printf("%d", rres);
return 0;
}
