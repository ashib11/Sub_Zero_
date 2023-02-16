#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n], y = 1, x = 1;
    for (int i = 0; i < n; i++)
    {
        x = y;
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = x;
            x *= 2;
        }
        y *= 2;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}