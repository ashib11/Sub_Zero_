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
    int tc; cin >> tc; 
    for(int i=1; i<=tc; ++i) {
        int a,b,c,d; 
        cin >> a >> b >> c >> d; 
        if((abs(a-c)==abs(b-d))) {
            cout << "Case " << i << ": 1"<<endl;    
        }
        else if(abs(a-c)%2==abs(b-d)%2) 
        cout << "Case " << i << ": 2" << endl; 
        else cout << "Case " << i << ": impossible" << endl; 
    }
    return 0;
}