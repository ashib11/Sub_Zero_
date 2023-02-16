#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        long long int arr[n][n], a, b, c, d, e, f;
        b = 1;
        for (int i = 0; i < n; i++)
        {
            a = b;
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = a;
                a = a * 2;
            }
            b = b * 2;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (n == 1)
                    printf("%lld", arr[i][j]);
                else if (n == 2)
                {
                    if (j == 0)
                        printf("%lld", arr[i][j]);
                    else
                        printf(" %lld", arr[i][j]);
                }
                else if (n == 3 || n == 4)
                {
                    if (j == 0)
                    {
                        printf(" %lld", arr[i][j]);
                    }
                    else
                        printf("%3lld", arr[i][j]);
                }
                else if (n == 5)
                {
                    if (j == 0)
                    {
                        printf("%3lld", arr[i][j]);
                    }
                    else
                        printf("%4lld", arr[i][j]);
                }
                else if (n == 6 || n == 7)
                {
                    if (j == 0)
                    {
                        printf("%4lld", arr[i][j]);
                    }
                    else
                        printf("%5lld", arr[i][j]);
                }
                else if (n == 8 || n == 9)
                {
                    if (j == 0)
                    {
                        printf("%5lld", arr[i][j]);
                    }
                    else
                        printf("%6lld", arr[i][j]);
                }
                else if (n == 10)
                {
                    if (j == 0)
                    {
                        printf("%6lld", arr[i][j]);
                    }
                    else
                        printf("%7lld", arr[i][j]);
                }
                else if (n == 12 || n == 11)
                {
                    if (j == 0)
                    {
                        printf("%7lld", arr[i][j]);
                    }
                    else
                        printf("%8lld", arr[i][j]);
                }
                else if (n == 14 || n == 13)
                {
                    if (j == 0)
                    {
                        printf("%8lld", arr[i][j]);
                    }
                    else
                        printf("%9lld", arr[i][j]);
                }
                else if (n == 15)
                {
                    if (j == 0)
                    {
                        printf("%9lld", arr[i][j]);
                    }
                    else
                        printf("%10lld", arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}