#include <stdio.h>
int main()
{
    double M[12][12], sum = 0.0;
    int L, i, j;
    char T[2];
    scanf("%d %s", &L, &T);

    getchar();

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for (int i = 0; i < 12; i++)
    {
        sum = sum + M[i][L];
    }
    if (T[0] == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (T[0] == 'M')
    {
        printf("%.1lf\n", (sum / 12.0));
    }

    return 0;
}
