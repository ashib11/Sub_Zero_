#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        b = i * i;
        c = i * i * i;
        printf("%d %d %d\n", i, b, c);
        d = b + 1;
        e = c + 1;
        printf("%d %d %d\n", i, d, e);
    }

    return 0;
}