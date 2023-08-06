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
void solve()
{
    int b, c, h;
    cin >> b >> c >> h;
    if(b==(c+h)){
        cout << 2*b - 1 << endl; 
    }
    else if(b>(c+h)){
        cout << (c+h)*2 + 1 << endl; 
    }
    else if((c+h)>b){
        cout << 2*b-1 << endl; 
    }
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}