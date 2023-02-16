#include<stdio.h>
int main()
{
    int i,j,n,count,mmod,coun;
    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        coun=0;
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }

        }
        if(count!=0 || n==1)
        {
            printf("Nada\n");
        }
        else
        {
            while(n!=0)
            {
                int mmod=n%10;
                n=n/10;
                for(j=2; j<=mmod/2; j++)
                {
                    if(mmod%j==0)
                    {
                        coun++;
                        break;
                    }
                }
            }
            if(coun!=0 || mmod==1)
            {
                printf("Primo\n");
            }
            else
            {
                printf("Super\n");
            }
        }
    }

    return 0;
}