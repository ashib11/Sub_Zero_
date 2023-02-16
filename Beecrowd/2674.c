#include <stdio.h>
int func(int l)
{
    int counter = 0;
    while (l != 0)
    {
        l = l / 10;
        counter++;
    }
    return counter;
}
int main()
{
    int n, count = 0, digit, r, super = 0;
    while (scanf("%d", &n) != EOF)
    {
        digit = func(n);
        count = 0;
        super = 0;

        if(n == 1)
        {
            printf("Nada\n");
            continue;
        }

        for (int i = 2;i <= (n/2);i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            if(count == 1)
            {
                printf("Nada\n");
                break;
            }
        }
        if (count == 1)
        {
            continue;
        }
        else
        {
            if (n == 2 || n == 3 || n == 5 || n == 7)
            {
                printf("Super\n");
            }
            else
            {
                for (int i = 1; i <= digit; i++)
                {
                    r = n % 10;
                    n = n / 10;
                    if ((r == 2) || (r == 3) || (r == 5) || (r == 7))
                    {
                        super++;
                        continue;
                    }
                    else
                    {
                        printf("Primo\n");
                        break;
                    }
                }
                if (super == digit)
                {
                    printf("Super\n");
                }
            }
        }
    }
    return 0;
}