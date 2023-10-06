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
#define F(i, a, b) for (int i = a; i < b; i++)
#define B(i, b, a) for (int i = b; i >= a; i--)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
vector<int> x,y; 
    fastIO();
    int tc;
    cin >> tc; 
    for(int i =1 ; i<=tc; ++i){
            int n;
            cin >> n; 
            F(j,0,n){
                    F(k,0,3){
                        int a,b;
                        cin >> a >> b;
                        x.push_back(a); 
                        y.push_back(b); 
                    }
            }
    }
    return 0;
}