#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int tc,x,n,adha;
    scanf("%d",&tc);

    while(tc--)
    {
        long long int res=0,sum=0,tum=0,m=1;
        int arr[100000]={0},upokar=0;
        scanf("%d",&n);
        for(int i=1; i<=n; i++){
            m=m*2;
            arr[upokar]=m;
            upokar++;
        }
        adha=n/2;
        sum=arr[n-1];
        for (int i=0;i<adha-1;i++)
            {
                sum=sum+arr[i];
            }
        for (int i=adha-1;i<n-1;i++)
            {
                tum=tum+arr[i];
            }
        res = (sum-tum);
        printf("%lld\n",res);
    }
    return 0;
}