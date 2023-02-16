#include <stdio.h>
int main()
{

    int testcase, x, sum;
    scanf("%d", &testcase);
    for (int i = 1; i <= testcase; i++)
    {
        sum = 0;
        scanf("%d", &x);
        for (int j = 1; j < x; j++)
        {
            if (x % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == x)
        {
            printf("%d eh perfeito\n", x);
        }
        else if (sum != x)
        {
            printf("%d nao eh perfeito\n", x);
        }
    }

    return 0;
}