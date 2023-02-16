#include <stdio.h>

int main()
{
    long long int n, i, sum = 0, value, l = 0, c1 = 0;
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &value);
        sum += value;
        if (value % 2 == 0 && l == 0)
            l = i + 1;
        if (value == 1 && l == 0)
            c1++;
    }
    if (l == 0)
        printf("%lld %lld\n", n, (sum - n));
    else
        printf("%lld %lld\n", l, (sum - ((l * 2) - 1 - c1)));

    return 0;
}