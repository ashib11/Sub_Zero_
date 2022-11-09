#include <stdio.h>
int main()
{
    int a, n, sum = 0;
    scanf("%d", &a);
    scanf("%d", &n);
    while (1)
    {
        if (n <= 0)
        {
            scanf("%d", &n);
        }
        else
            break;
    }
    for (int i =1; i <= n; i++)
    {
        sum = sum + a;
        a++; 
    }
    printf("%d\n",sum );
    return 0;
}