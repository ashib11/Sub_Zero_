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
    int test; 
    cin >> test; 
    for(int i=1 ; i<=test ; ++i) {
        int n,p,q;
        cin >> n >> p >> q; 
        vector<int> v ; 
        for(int j=0; j<n; ++j) {
            int x; 
            cin >> x;
            v.push_back(x); 
        }
        int total =0, highest =0; 
        for(int j=0; j<min(p,n); ++j) {
            if(total + v[j] <=q) {
                total+=v[j]; 
                highest++; 
            }
            else break; 
        }
        cout << "Case " << i << ": " << highest << endl;
    }
    return 0;
}