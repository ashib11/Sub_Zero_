#include <stdio.h>
int main()
{
    int list[15], even[5], odd[5], a, b, c=0, d=0,m,n, j, i, eq=0, neq = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &list[i]);
    }
    for (a = 0; a < 15; a++)
    {
        if (eq == 5)
        {
            for (int n = 0; n < 5; n++)
            {
                printf("par[%d] = %d\n", n, even[n]);
                eq = 0;
            }
        }
        if (neq == 5)
        {
            for (int m = 0; m < 5; m++)
            {
                printf("impar[%d] = %d\n", m, odd[m]);
                neq = 0;
            }
        }
        if (list[a] % 2 == 0)
        {
            even[c] = list[a];
            ++c;
            eq++;
            if (c == 5)
            {
                c = 0;
            }
        }
        if (list[a] % 2 != 0)
        {
            odd[d] = list[a];
            ++d;
            neq++;
            if (d == 5)
            {
                d = 0;
            }
        }
    }
  
    for (int j = 0; j < neq; j++)
    {
        printf("impar[%d] = %d\n", j, odd[j]);
    }
      for (int i = 0; i < eq; i++)
    {
        printf("par[%d] = %d\n", i, even[i]);
    }

    return 0;
}