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
    long long n,s;
    while(1) {
        s=1;
        cin >> n;
        if(n<0) break; 
        else if(n==0) {
            cout << s << endl; 
            continue;
        }
        for(int i=1 ; i<=n; ++i) {
            s = (i*2) + (s-i); 
        }
        cout << s << endl; 
   
    }
     return 0;
}