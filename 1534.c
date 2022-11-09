#include <stdio.h>
int main()
{
    int n, a;
    int arr[72][72];
    while (scanf("%d", &n) != EOF)
    {

        a = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                {
                    arr[i][j] = 1;
                }
                else
                    arr[i][j] = 3;
                if (j == a)
                {
                    arr[i][j] = 2;
                }
            }
            a--;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}