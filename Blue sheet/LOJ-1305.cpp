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
    int tc; 
    cin >> tc; 
    for(int i=1; i<=tc ; ++i) {
        ll a1,a2, b1,b2, c1,c2, d1,d2; 
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2; 
        d1 = a1-b1 + c1;
        d2 = a2 - b2 + c2; 
        ll area = 0.5*((a1*b2)+(b1*c2)+(c1*d2)+(d1*a2)-((a2*b1)+(b2*c1)+(c2*d1)+(d2*a1))); 
        cout << "Case " << i << ": " << d1<<" " << d2 <<" " <<  abs(area) << endl;
    
    }
    return 0;
}