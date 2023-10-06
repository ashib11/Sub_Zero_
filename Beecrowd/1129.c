#include <stdio.h>
int main()
{
    int n;
    int count;

    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                int a, b, c, d, e;
                count = 0;
                scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
                if (a <= 127)
                {
                    count++;
                    a = 1;
                }
                if (b <= 127)
                {
                    count++;
                    b = 1;
                }
                if (c <= 127)
                {
                    count++;
                    c = 1;
                }
                if (d <= 127)
                {
                    count++;
                    d = 1;
                }
                if (e <= 127)
                {
                    count++;
                    e = 1;
                }
                if (count == 1)
                {
                    if (a == 1)
                    {
                        printf("A\n");
                    }
                    if (b == 1)
                    {
                        printf("B\n");
                    }
                    if (c == 1)
                    {
                        printf("C\n");
                    }
                    if (d == 1)
                    {
                        printf("D\n");
                    }
                    if (e == 1)
                    {
                        printf("E\n");
                    }
                }
                else
                {
                    printf("*\n");
                }
            }
        }
    }

    return 0;
}