#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc,i,j,flag;
    string str1,str2;
    cin>>tc;
    int arr[124];
    int arr2[124];
    getchar();
    for(i=1;i<=tc;i++)
    {
        flag=0;
        for(j=0;j<123;j++)
        {
            arr[j]=0;
            arr2[j]=0;
        }
        getline(cin,str1);
        getline(cin,str2);
        for(j=0;str1[j];j++)
        {
            if(str1[j]>=65 && str1[j]<=90)
            str1[j]+=32;
            arr[str1[j]]++;
        }
        for(j=0;str2[j];j++)
        {
            if(str2[j]>=65 && str2[j]<=90)
            str2[j]+=32;
            arr2[str2[j]]++;
        }
        for(j=97;j<123;j++)
        {
            if(arr[j]==arr2[j])
            flag=0;
            else
            {
                flag=1;
                break;
            }
        }
        cout<<"Case "<<i<<": ";
        if(flag==0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}
