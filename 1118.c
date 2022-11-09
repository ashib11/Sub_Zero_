#include <stdio.h>
int main()
{
    double a, b, avg, valid = 0;
    int x = 1, count = 0;
    while (1)
    {
        if (x == 2)
        {
            break;
        }
        else
        {
            scanf("%lf %lf", &a, &b);
            if (a >= 0 && a <= 10)
            {
                valid = valid + a;
                count = count + 1;
            }
            else
            {
                printf("nota invalida\n");
            }
            if (b >= 0 && b <= 10)
            {
                valid = valid + b;
                count = count + 1;
            }
            else
            {
                printf("nota invalida\n");
            }
            if (count == 2)
            {
                avg = valid / 2.0;
                printf("media = %.2lf\n", avg);
                while (scanf("%d", &x))
                {
                    if (x != 2 && x != 1)
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                    }
                    else if ((x == 1) && (count == 2))
                    {
                        count = 0;
                        valid = 0;
                        printf("novo calculo (1-sim 2-nao)\n");
                        break;
                    }
                    else if (x == 2)
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}