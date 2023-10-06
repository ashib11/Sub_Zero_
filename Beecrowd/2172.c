#include <stdio.h>
int main()
{
    int n;
    unsigned int x, total;
    while (1)
    {
        scanf("%d %u", &n, &x);
        if (n == 0 && x == 0)
        {
            break;
        }
        else
        {
            total = 0;
            total = n * x;
            printf("%u\n", total);
        }
    }

    return 0;
}
