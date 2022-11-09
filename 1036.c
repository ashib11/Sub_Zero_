#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, r1, r2, x;
    scanf("%lf %lf %lf", &a, &b, &c);
    x = (b * b - 4 * a * c);
    if (a != 0 && x >= 0)
    {

        d = sqrt(x);
        r1 = (-b + d) / (2 * a);
        r2 = (-b - d) / (2 * a);

        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}