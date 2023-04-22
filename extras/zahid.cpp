#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int x,y,sum;
    scanf("%d %d",&x,&y);
     if(abs(x)==abs(y))
    {
        cout<<x/y<<" 0"<<endl;
    }
    else if(x<0 && y<0)
    {
        sum=y*((x/y)+1);
         cout<<sum/y<<" "<<x-sum<<endl;
    }
    else if(x<0 && y>0)
    {
         sum=y*((x/y)-1);
         cout<<sum/y<<" "<<x-sum<<endl;
    }
    
    else
    {
        cout<<x/y<<" "<<x%y<<endl;
    }
    return 0;
}
You sent
ki code des eidi
