#include <iostream>
using namespace std;
int n,p,g,t;
int main()
{
	for(cin>>t;t--;)
	{
		cin>>n;
		for(p=1,g=0;p<=n;g++)
		{
			p=p/(p%10)*(p%10+1);
			if(p%10==0)p++;
		}
		cout<<g<<endl;
	}
}