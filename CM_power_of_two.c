
#include <stdio.h>
#include <math.h>

long long convert(int);

int main()
{
  long long int loop, n, bin, number;
  scanf("%lld", &loop);
  for (int i = 1; i <= loop; i++)
  {
    scanf("%lld", &number);
    n = pow(2, number);
    bin = convert(n);
    printf("%lld\n", bin);
  }
  return 0;
}

long long convert(int n)
{
  long long int bin = 0;
  int rem, i = 1;

  while (n != 0)
  {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}