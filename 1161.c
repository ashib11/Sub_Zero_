#include <stdio.h>
int main()
{
    int m, n;
    long long j,k,sum; 
    while (scanf("%d %d", &m, &n) != EOF)
    {
        j = 1, k = 1;
        for (int i = 1; i <= m; i++)
        {
           j = j*i; 
        }
        for (int i = 1; i <=n; i++)
        {
            k = k*i; 
        }
        sum = j+k ;
        printf("%lld\n",sum); 
       
    }
     return 0;
}
