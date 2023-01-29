#include<iostream>
using namespace std;
int main()
{
int tc, n; 
cin >> tc; 
for (int i = 0; i < tc; i++)
{
    cin >> n; 
    int digit=0; 
    int last_digit = n%10; 
    while (n>0)
    {
        n/=10; 
        digit++;

    }
    int ans = (last_digit-1)*10; 
    ans = ans + digit* (digit+1)/2; 
    cout << ans << endl; 
}

return 0;
}