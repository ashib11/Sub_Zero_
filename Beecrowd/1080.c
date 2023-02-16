#include <stdio.h>
int main()
{
    int x, j, highest = 0;
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &x);
        if (highest < x)
        {
            highest = x;
            j = i;
        }
    }
    printf("%d\n", highest);
    printf("%d\n", j);
    return 0;
}