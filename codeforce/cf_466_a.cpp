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
	fastIO();
	int n, m , a, b;
	cin >> n >> m >> a >> b ;
	int sum =0;
	double r1 = (double)(b)/m; 
	double r2 = a; 
	if (r1<r2) {
		int j = n/m; 
		int lft = n -(j*m); 
		sum = j*b + lft*a;
		sum = min(sum,(j+1)*b); 
	}
	else{
		sum = a*n;  
	}
	 cout <<sum << endl; 
	return 0;
}
