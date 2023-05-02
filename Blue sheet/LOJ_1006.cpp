#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int T; 
    cin >> T; 
    for(int i=1 ; i<=T; ++i) {
        long long arr[100009]; 
        for(int j=0; j<6; ++j) {
            cin >> arr[j]; 
        }
        ll n;
        cin >> n; 
        for(int j =6; j<=n; ++j) {
            arr[j] = (arr[j-1] + arr[j-2] + arr[j-3] + arr[j-4] + arr[j-5] + arr[j-6])%10000007; 
        }
        cout << "Case " << i << ": " << arr[n] %10000007 << endl; 
    }
    return 0;
}