#include <stdio.h>
int main()
{

    long long int i, n, x;
    int facts[] = {1, 2, 6, 24, 120, 720, 5040, 40320};

    scanf("%lld", &n);

    x = 0;
    for (i = 7; i >= 0; --i)
    {
        x = x + (n / facts[i]);
         n = n % facts[i];
    }
    printf("%lld\n", x);

    return 0;

    return 0;
}