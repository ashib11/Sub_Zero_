#include <stdio.h>
int main()
{
    int N, X, Y, sum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);
        if (X < Y)
        {
            for (int i = (X + 1); i < Y; i++)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
        }
        else if (Y<X)
        {
            for (int i = (Y + 1); i < X; i++)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
        }
        
        printf("%d\n", sum);
        sum = 0; 
    }

    return 0;
}