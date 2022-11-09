#include <stdio.h>

int main()
{
    int i, n, n1 = 0, n2 = 1, temp;

    scanf("%d", &n);

    if (n == 1)
    {
        printf("0");
        return 0;
    }

    if (n == 2)
    {
        printf("0 1");
        return 0;
    }

    printf("0 1");

    for (int i = 1; i <= (n - 2); i++)
    {
        printf(" %d", n1 + n2);

        temp = n1;
        n1 = n2;
        n2 = temp + n2;
        if (i == n)
        {
            printf("\n");
        }
    }

    return 0;
}
