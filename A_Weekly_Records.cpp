#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    
    while (n--)
    {
        int sum =0; 
        for (int i = 0; i < 7; ++i)
        {
            int x;
            cin >> x;
            sum +=x; 
        }
        cout << sum << " "; 
    }
    return 0;
}