#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a, b, ans, rem;
    scanf("%d %d", &a, &b);
    if (a < 0)
    {
        rem = abs(a / b);
        ans = (a - rem) / b;
        if (rem > abs(b))
        {
            rem = b;
        }
    }
    else
    {
        ans = a / b;
        rem = a - (b * ans);
        if (rem > abs(b))
        {
            rem = b;
        }
    }
    printf("%d %d\n", ans, rem);
    return 0;
}