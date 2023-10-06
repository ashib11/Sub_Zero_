#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
    if(n%2==0){
        cout << 2 << endl; 
        cout << 1 << " " << n << endl; 
        cout << 1 << " " << n << endl; 
    }
    else {
        cout << 4 << endl; 
        cout << 1 << " " << n-1 << endl; 
        cout << 1 << " " << n-1 << endl; 
        cout << n-1 << " " << n << endl; 
        cout << 1 << " " << n << endl; 
    }
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}