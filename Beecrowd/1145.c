#include <stdio.h>
int main()
{
    int x, y, j = 0;
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= y; i++)
    {
        j++;
        printf("%d", i);
        if (j == x || j == y)
        {
            printf("\n");
            j = 0;
        }
        else
        {
            printf(" ");
        }
    }

    return 0;
}