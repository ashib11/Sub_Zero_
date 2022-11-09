#include <stdio.h>
int main()
{
    int n, position = 0;
    scanf("%d", &n);
    int X[n];
    int limit = 1000;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (X[i] < limit)
        {
            limit = X[i];
            position = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", limit, position);
    return 0;
}