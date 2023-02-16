#include <stdio.h>
int main()
{
    int a, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        scanf("%d", &a);
        if ((a == 1) || (a == 2))
        {
            printf("0\n");
        }
        else
        {

            printf("%d\n", ((a - 1) / 2));
        }
    }

    return 0;
}