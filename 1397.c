#include <stdio.h>
int main()
{
    int n, x, z;
    while (1)
    {
        scanf("%d", &n);
        
        x=0,z=0; 
        if (n == 0)
        {
            return 0;
        }

        else
        {
            for (int i = 1; i <= n; i++)
            {
                int a, b;
                scanf("%d %d", &a, &b);
                if (a > b)
                {
                    x = x + 1;
                }
                if (b > a)
                {
                    z = z + 1;
                }
                if (a == b)
                {
                    x = x;
                    z = z;
                }
            }

            printf("%d %d\n", x, z);
        }
    }
    return 0;
}