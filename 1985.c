#include <stdio.h>
int main()
{
    int a, b, n;
    double total = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        scanf("%d %d", &a, &b);
        if (a == 1001)
        {
            total = total + (1.50 * b) ;
        }
        else if (a == 1002)
        {
            total = total + (2.50 * b) ;
        }
        else if (a == 1003)
        {
            total = total + (3.50 * b) ;
        }
        else if (a == 1004)
        {
            total = total + (4.50 * b) ;
        }
        else if (a == 1005)
        {
            total = total + (5.50 * b) ;
        }
    }
printf("%.2lf\n",total); 
    return 0;
}