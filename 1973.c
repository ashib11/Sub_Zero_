#include <stdio.h>
int main()
{
    int n, count = 0, sum = 0;
    scanf("%d", &n);
    int arr[n + 1];
    int pos[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        pos[i] = 0;
    }
    int i = 0;
    while (1)
    {
        if ((i < 0) || (i >= n) || (arr[i] == 0))
        {
            break;
        }

        else if (arr[i] % 2 == 0)
        {
            arr[i] = arr[i] - 1;
            pos[i] = 1;

            i -= 1;
        }
        else
        {
            arr[i] = arr[i] - 1;
            pos[i] = 1;

            i += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        count = count + pos[i];
    }
    printf("%d %d\n", count, sum);
    return 0;
}