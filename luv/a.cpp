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
void solve(ll i){
	for(int j = 1; j<=i ; ++j){
		cout << "sin("<< j ; 
		if(j == i) {}
	}
}
int main()
{
    fastIO();
    int n; 
    cin >> n; 
    for(int i = 1; i < n ; ++i) cout << "("; 
    int l = n; 
    for(int i =0 ; i < n; ++i, l--){
    	solve(i);
    	if(i!=n) cout << "+" << l << ")"; 
    }
    cout << "+1" << endl; 
    return 0;
}