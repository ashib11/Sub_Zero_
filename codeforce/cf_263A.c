#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    int arr[50][50], x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    printf("%d\n", ((abs(x - 2) + abs(y - 2)) ) ); 
    return 0;
}