#include <stdio.h>

int main()
{
    int n, a, b, ar[100], i, sum = 0, tum = 0, br[100], j, lowest, p=0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &a, &b);
        for (i = 0; i < a; i++)
        {
            scanf("%d", &ar[i]);
            sum = sum + ar[i];
        }
        for (i = 0; i < a; i++)
        {
            tum = tum + ar[i];
            if (b == ar[i])
            {
                printf("%d\n", i+1);
            }
            else if (sum == tum && ar[i] != b)
            {
                for (i = 0, j = 0; i < a, j < a; i++, j++)
                {
                    br[j] = b - ar[i];
                    lowest = br[0];
                    if (br[j] < lowest)
                    {
                        lowest = br[j];
                      if(p!=j)
                      {
                        p=j;
                      }
                    }
                }
                printf("%d\n", p);
            }
        }
    }

    return 0;
} 