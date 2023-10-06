#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
int c = 1; 
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve() {
    vector<int> v(3) ; 
    for(int i =0 ; i < 3 ; ++i) {
        cin >> v[i] ; 
    }
    sort(v.begin(), v.end()) ; 
    cout << "Case " << c << ": " << v[1] << endl; 
    c++; 
}
int main()
{
    fastIO();
    int tc; 
    cin >> tc; 
    while(tc--) solve() ; 
    return 0;
}