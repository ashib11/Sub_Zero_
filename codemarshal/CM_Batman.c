#include <stdio.h>
int main()
{
    int t, n, x, pos = 0, neg = 0, total;
    char c;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        pos = 0;
        neg =0; 
        total = 0;
        scanf("%d ", &n);
        for (int j = 1; j <= n; j++)
        {
            scanf(" %c %d", &c, &x);
             
            if (c == '+')
            {
                pos = pos + x;
            }
            if (c == '-')
            {
                neg = neg + x;
            }
            
        }
        total = 1000 + pos - neg;
        printf("Case %d: %d\n", i, total);
    }

    return 0;
}