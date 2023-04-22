#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long lon
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define getln(s) geline(cin, s)
#define point(x, d) fixed << setprecision(d) << x
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
    for(int i=1; i<=tc; ++i) {
              int count =0;
              int num; 
              cin >> num; 
              cout << "Case " << i << ": " << ((__builtin_popcount(num)& 1)? "odd" : "even") << endl; 
                
              
    }
    return 0;
}