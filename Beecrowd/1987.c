#include <stdio.h>
#include <string.h>
int main()
{
    int n, num, count;
    while (scanf("%d %d", &n, &num) != EOF)
    {
        count = 0;
        while (n--)
        {
            count += num % 10;
            num /= 10;
        }
        if (count % 3 == 0)
        {
            printf("%d sim\n", count);
        }
        else
            printf("%d nao\n", count);
    }

    return 0;
}