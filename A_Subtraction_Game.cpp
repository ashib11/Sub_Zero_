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
void solve() {
    int a, b; 
    cin >> a >> b; 
    cout << a + b << endl; 
}
int main()
{
    fastIO();
    int tc; 
    cin >> tc;
    while(tc--) {
        solve(); 
    }
    return 0;
}