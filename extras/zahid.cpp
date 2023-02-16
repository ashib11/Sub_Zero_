#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year,z=0;
    while(cin>>year)
    {
        int l=0,h=0,b=0;
        if(z==1)
        cout<<endl;
        z=1;
        if(((year%4)==0 && (year%100)!=100) || year%400==0)
        {
            cout<<"This is leap year.\n";
            l=1;
        }
        if(year%15==0)
        {
            cout<<"This is huluculu festival year.\n";
            h=1;
        }
        if((((year%4)==0 && (year%100)!=100) || year%400==0) && year%55==0)
        {
            cout<<"This is bulukulu festival year.\n";
            b=1;
        }
        if(h==0 && l==0 && b==0)
        cout<<"This is an ordinary year.\n";
    }
    return 0;
}