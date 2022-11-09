
#include <stdio.h>
#include <math.h>

long long convert(int);

int main()
{
   long long int loop, n, bin, number;

    while (1)
    {
        scanf("%lld", &loop);
        if (loop < 0)
        {

            return 0;
        }
        bin = convert(loop);
        printf("%lld\n", bin);
    }

    return 0;
}

long long convert(int n)
{
    long long int bin = 0;
    long long int rem, i = 1;

    while (n != 0)
    {
        rem = n % 3;
        n = n/3;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}