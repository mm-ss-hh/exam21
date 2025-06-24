#include <stdio.h>
#include <math.h>

#define p 21500.0
#define M_PI 3.14159265358979323846

int main(void)
{
    double R;
    char c;
    
    if (scanf("%lf%c", &R, &c) != 2 || c != '\n') {
        printf("n/a");
        return 0;
    }
    if(R < 0) {
        printf("n/a");
        return 0;
    }
    double result = p * (4.0 / 3.0) * M_PI * pow(R, 3);
    double rresult = round(result);
    printf("%.0lf", rresult);
    return 0;
}
