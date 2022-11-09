#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x != 1)
    {
        if (y % x == 0)
        {
            printf("Sao Multiplos\n");
        }
        else if (y % x != 0)
        {
            printf("Nao sao Multiplos\n");
        }
    }
    else{
        printf("Nao sao Multiplos\n");
    }

    return 0;
}