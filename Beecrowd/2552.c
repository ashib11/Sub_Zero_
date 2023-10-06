#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        int arr[n + 2][m + 2];
        int result[n+2][m+2];
        memset(arr, 0, sizeof(arr));
        int sum = 0;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                sum = 0; 
                
                    if (arr[i][j] == 0)
                    {
                        if (arr[i + 1][j] == 1)
                        {
                            sum++;
                        }
                        if (arr[i][j + 1] == 1)
                        {
                            sum++;
                        }
                        if (arr[i - 1][j] == 1)
                        {
                            sum++;
                        }
                        if (arr[i][j - 1] == 1)
                        {
                            sum++;
                        }

                        result[i][j] = sum;
                    }
                    else
                        result[i][j] = 9;
                
            }
        }
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < m+1; j++)
            {
                printf("%d", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}