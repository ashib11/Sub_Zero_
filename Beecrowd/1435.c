#include <stdio.h>
int main()
{
  int n, arr[100][100], matrix, st, end;
  while (1)
  {
    scanf("%d", &n);
    if (n == 0)
    {
      break;
    }
    matrix = n / 2;
    if (n % 2 == 1)
    {
      matrix++;
    }
    st = 0, end = (n - 1);
    for (int k = 1; k <= matrix; k++)
    {
      for (int i = st; i <= end; i++)
      {
        for (int j = st; j <= end; j++)
        {
          arr[i][j] = k;
        }
      }
      st++, end--;
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (j == 0)
        {
          printf("%3d", arr[i][j]);
        }
        else
          printf(" %3d", arr[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}