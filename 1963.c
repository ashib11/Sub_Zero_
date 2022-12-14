#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    double a, b, dif, ans;
    scanf("%lf %lf", &a, &b);
    dif = abs(a - b);
    ans = (dif * 100) / a;
    printf("%.2lf%\n", ans);
    return 0;
}