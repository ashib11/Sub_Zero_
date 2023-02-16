#include <stdio.h>
int main()
{
    int number, co;
    double sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, f1, f2, f3;
    scanf("%d", &number);
    char c;
    for (int i = 1; i <= number; i++)
    {
        scanf("%d %c", &co, &c);
        if (c == 'C')
        {
            sum1 = sum1 + co;
        }
        if (c == 'R')
        {
            sum2 = sum2 + co;
        }
        if (c == 'S')
        {
            sum3 = sum3 + co;
        }

        sum = sum1 + sum2 + sum3;
        f1 = ((sum1 / sum) * 100.0);
        f2 = ((sum2 / sum) * 100.0);
        f3 = ((sum3 / sum) * 100.0);
    }
    printf("Total: %.lf cobaias\n", sum);
    printf("Total de coelhos: %.lf\nTotal de ratos: %.lf\nTotal de sapos: %.lf\n", sum1, sum2, sum3);
    printf("Percentual de coelhos: %.2lf %\n", f1);
    printf("Percentual de ratos: %.2lf %\n", f2);
    printf("Percentual de sapos: %.2lf %\n", f3);

    return 0;
}