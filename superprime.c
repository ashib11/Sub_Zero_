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
    int n, count = 0, r, digit, super = 0;
    while (1)
    {
        count = 0;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            digit = func(n);
            r = n % 10;
            while (1)
            {
                
                if (n < 10)
                {
                    printf("Super\n");
                    break;
                }

                else
                {
                    if (((r == 3) || (r == 2) || (r == 5) || (r == 7)))
                    {
                        r = n / 10;
                        super++;
                    }
                    else
                    {
                        printf("Primo\n");
                        break;
                    }
                }
            }
        }
        if (super == digit)
        {

            printf("Super\n");
        }

        else if (count != 2)
        {
            printf("Nada\n");
        }
    }

    return 0;
}
