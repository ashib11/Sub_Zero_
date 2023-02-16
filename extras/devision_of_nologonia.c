#include <stdio.h>
int main()
{
    int k, m, n, x, y;

    while (1)
    {
        scanf("%d", &k);
        if (k == 0)
        {
            return 0;
        }

        scanf("%d %d", &n, &m);
        for (int i = 1; i <= k; i++)
        {
            scanf("%d %d", &x, &y);

            if ((x > n) && (y > m))
            {
                printf("NE\n");
            }
            else if (((y == m) || (x == n)) || ((y == m) && (x == n)))
            {
                printf("divisa\n");
            }
            else if ((x <= n) && (y > m))
            {
                printf("NO\n");
            }
            else if (x < n && y < m)
            {
                printf("SO\n");
            }
            else if (x > n && y < m)
            {
                printf("SE\n");
            }
        }
    }

    return 0;
}