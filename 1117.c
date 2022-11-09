#include <stdio.h>
int main()
{
    double a, b, count = 0, valid = 0, n;
    while (1)
    {
        if (count == 2)
        {
            break;
        }
        scanf("%lf", &a);
        if (a >= 0 && a <= 10)
        {
            count++;
            valid = valid + a;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    b = valid / 2.0;
    printf("media %.2lf\n", b);
    return 0;
}
