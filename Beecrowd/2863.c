#include <stdio.h>
int main()
{
  float n, x, lowest; 
  while (scanf("%f", &n) != EOF)
  {
    lowest = 11.1F; 
    for (int i = 1; i <= n; i++)
    {
      scanf("%f", &x);
      if (lowest > x)
      {
        lowest = x;
      }
    }
    printf("%0.2f\n", lowest);
  }

  return 0;
}