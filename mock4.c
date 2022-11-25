#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c, d, sum;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a == 1)
    {
        printf("YES\n");
    }
    else
    {
        sum = b + c + d;
        if (sum > 1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}