#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    while (1)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a == 0 && b == 0 && c == 0 && d == 0)
        {
            break;
        }
        if ((a == c) && (b == d))
        {
            printf("0\n");
        }
        else if ((abs(a - c) == abs(b - d)) || ((a == c) || (b == d)))
        {
            {
                printf("1\n");
            }
        }
        else
            printf("2\n");
        return 0;
    }