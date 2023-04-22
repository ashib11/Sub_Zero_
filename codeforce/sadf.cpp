#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n;
    long long int arr[163842],i,j,sum=0,pos;
    for(i=0;i<=163841;i++)
    {
        arr[i]=1;
    }
    for(i=2;i<=sqrt(163841);i++)
    {
        for(j=2;j<=sqrt(163841);j++)
        {
            arr[i*j]=0;
        }
    }
    cin>>tc;
    while(tc--)
    {
        sum=0;
        cin>>n;
        for(i=2;i<=163841;i++)
        {
            sum+=arr[i];
            if(sum==n)
            {
                pos=i;
                break;
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}