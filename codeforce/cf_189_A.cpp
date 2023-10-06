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
	int n, a, b , c ;
	int sum = 0;
	cin >> n >> a >> b >> c;
	int x = 1;
	for (int i = 0 ; i <= 4000; ++i)
		for (int j = 0 ; j <= 4000 ; ++j) {
			sum = n - (a * i) - (b * j);
			if (sum >= 0 && sum % c == 0) {
				x = max(x, sum/c + i +j); 
			}
		}
		cout << x << endl; 
	return 0;
}