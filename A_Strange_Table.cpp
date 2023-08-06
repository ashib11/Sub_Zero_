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
    ll t, n , m , x; 
    cin >> t; 
    while(t--) {
        cin >> n >> m >> x; 
        cout<<((x-1)/n)+1+((x-1)%n)*m<<"\n";
    }
    return 0;
}
