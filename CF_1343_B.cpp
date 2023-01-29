#include<iostream>
using namespace std;
int main()
{
int test_case,n,even,odd; 
cin >> test_case ; 
for (int i = 0; i < test_case; i++)
{
    cin >> n; 
     even = 0, odd=0; 
    for (int i = 1; i <= n/2; i++)
    {
        even +=i; 
    }
    for (int i = (n/2)+1; i <= n; i++)
    {
        odd +=i; 
    }
    if (even == odd)
    {
       cout << "YES\n"; 
    }
    else cout << "NO\n"; 
}

return 0;
}