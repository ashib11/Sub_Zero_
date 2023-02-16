#include <stdio.h>
int main()
{
    int x, y, i;
    scanf("%d %d", &x, &y);
    while (1)
    {
        if (x == y)
        {
            break;
        }
        else
        {
            i = 1;
            if (x > y)
            {
                if ((y % 5 == 2) || (y % 5 == 3))
                {
                    printf("%d", y);
                    y = y + i;
                }
            }

            else if (y > x)
            {
                if ((x % 5 == 2) || (x % 5 == 3))
                {
                    printf("%d", y);
                    x = x + i;
                }
            }
        }
    }

    return 0;
}