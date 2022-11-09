#include <stdio.h>
int main()
{
    int i, sum=0;
    float n,avg;
    scanf("%f",&n);

    for (i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d\n",i);
    }
    avg=sum/10.0;
    printf("%f\n",avg);
    return 0;
}