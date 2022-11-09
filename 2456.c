#include <stdio.h>
int main()
{
    int n, temp = 0, increase = 0, decrease = 0;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &n);

        if (n > temp)
        {
            temp = n;
            increase++;
        }
        else if (n < temp)
        {
            temp = n;
            decrease++;
        }
    }
    if (increase == 5)
    {
        printf("C\n");
    }
    else if (decrease == 4)
    {
        printf("D\n");
    }
    else
    {
        printf("N\n");    
    }

    return 0;
}