#include <stdio.h>
int main()
{
    int n, m, sum = 0;
   
    for (;;)
    {
         scanf("%d %d", &n, &m);
         sum = 0; 
         if (n > m)
    {
        if (m > 0)
        {
            for (int i = m; i <= n; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }

        else if (m <= 0)
        {
            return 0;
        }
    }

    if (m > n)
    {
        if (n > 0)
        {
            for (int i = n; i <= m; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }

        else if (m <= 0)
        {
            return 0;
        }
    }
    }
    
    

    return 0;
}