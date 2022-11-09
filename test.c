#include <stdio.h>

int main()
{
    while (1)
    {
        int a, b, sum = 0, temp;
        scanf("%d %d", &a, &b);
        if (a <= 0 || b <= 0)
        {
            break;
        }
        if (b > a)
        {
            temp = b;
            b = a;
            a = temp;
        }

        if (a >= b)
        {
            for (int i = b; i <= a; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }
    }

    return 0;
}