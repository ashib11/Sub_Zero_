#include <stdio.h>
int main()
{
    int x, y, count;
    scanf("%d", &y);
    for (int i = 1; i <= y; i++)
    {
        scanf("%d", &x);
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d eh primo\n", x);
            count = 0; 
        }
        else
        {
            printf("%d nao eh primo\n", x);
            count = 0; 
        }
    }

    return 0;
}