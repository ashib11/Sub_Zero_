#include <stdio.h>
int main()
{
    int n, m, k, l;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            m = i + 1;
            k = 2;
            for (int j = 0; j <= i; j++,m--)
            {
                arr[i][j] = m;
            }
            for (int j = i + 1; j < n; j++, k++)
            {
                arr[i][j] = k;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    printf("%3d", arr[i][j]);
                }
                else
                {
                    printf("%4d", arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}