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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;
        int n = x % 2020;
        // cout << x %2020 << endl; 
        //  cout << x%2021 << endl; 
        if (x < 2020)
        {
            cout << "NO" << endl;
        }
        else if(x/2020 < n){
            cout << "NO" << endl; 
        }
        else cout << "YES" << endl; 
    }
    return 0;
}