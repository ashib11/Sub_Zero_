#include <stdio.h>
int main()
{
    double M[12][12], sum = 0.0;
    int L, i, j, a = 1, b = 10;
    char T[2];
    scanf("%s", &T);

    getchar();

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for (i = 11; i > 6; i--)
    {
        for (j = a; j <= b; j++)
        {
            sum = sum + M[j][i];
        }
        a++;
        b--;
    }
    if (T[0] == 'S')
    {
        printf("%0.1lf\n", sum);
    }
    if (T[0] == 'M')
    {
        printf("%0.1lf\n", (sum / 30.0));
    }
}