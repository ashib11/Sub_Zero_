#include <stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    double N[100];
    for (int i = 0; i < 100; i++)
    {
        
        N[i] = x;
        printf("N[%d] = %0.4lf\n", i, N[i]);
        x = x / 2.0;
    }

    return 0;
}