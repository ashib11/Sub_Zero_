#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while (1)

    {
        scanf("%d", &n); 
        if (n==0)
        {
           break;
        }
        
        int num, flag = 0, count = 0;
        while (1)
        {
            flag = 0;
            for (int i = 1; i <= n; i++)
            {
                scanf("%d", &num);
                if (num != i)
                {
                    flag = 1;
                }
            }
            count++;
            if (!flag)
            {
                break;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}