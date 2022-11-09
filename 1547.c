#include <stdio.h>

int main()
{
    int n, qt, s, x, leastDiff, diff, pos;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        leastDiff = 1000;

        scanf("%d %d", &qt, &s);

        for(int j = 1; j <= qt; j++)
        {
            scanf("%d", &x);

            diff = s - x;

            if(diff < 0)
                diff = diff * (-1);

            if(diff < leastDiff)
            {
                leastDiff = diff;
                pos = j;
            }
        }

        printf("%d\n", pos);
    }

    return 0;
}