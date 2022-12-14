#include <stdio.h>
#include <math.h>
#include <string.h>
int check(long long int n);
int main()
{

  int test_casel;
  long long int num, chek;
  scanf("%d", &test_casel);
  for (int i = 1; i <= test_casel; i++)
  {
    scanf("%lld", &num);
    chek = sqrt(num);
    chek = chek * chek;
    if (num == chek)
    {
      check(num);
    }
    else
      printf("NO\n");
  }

  return 0;
}
int check(long long int n)
{
  int count = 0;
  if (n == 1)
  {
    printf("NO\n");
    return 0;
  }
  else
  {
    for (int i = 2; i <=sqrt(sqrt(n)); i++)
    {
      int value = sqrt(n); 
      if (value % i == 0)
      {
        count++;
        printf("NO\n");
        return 0;
      }
    }
  }

  if (count == 0)
  {
    printf("YES\n");
  }

  return 0;
}