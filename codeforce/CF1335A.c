#include <stdio.h>
int main()
{
    int t, arr[10000], count = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
        if ((arr[i] == 1) || (arr[i] == 2))
        {
            printf("0\n");
        }
        else
        {
            count = (arr[i] - 1) / 2;
            printf("%d\n", count);
        }
    }

    return 0;
}