#include <stdio.h>

int main()
{
    double pi = 3.1416;
    long long int d;
    double area, radius;
    scanf("%lld", &d);
    radius = d / 2.0;
    area = (((pi) * (radius * radius) * 0.5) + (d * d));
    printf("%.2lf\n", area);
    return 0;
}