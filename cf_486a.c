#include <stdio.h>
#include <string.h>
int main()
{
    long long int n, ans;
    scanf("%lld", &n);
    if (n == 1)
    {
        printf("-1\n");
    }
    else if (n % 2 == 0)
    {
        ans = (n / 2);
        printf("%lld\n", ans);
    }
    else
    {
        ans = (((n / 2) * (-1)) - 1);
        printf("%lld\n", ans);
    }
    return 0;
}