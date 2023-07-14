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
void solve() {

}

int main()
{
	fastIO();
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int s1=0, s2 =0; 
		cin >> n;
		int x ;
		int l = n/2;  
		if (n % 2 == 0 && (n / 2) % 2 != 0) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			for (int i = 1; i <= l ; ++i) {
				cout << i * 2 << ' ';
				s1+= (i*2); 
			}
			for (int i = 1 ; i < n / 2; ++i) {
				cout << (2 * i) - 1 << ' ';
				s2+=(2*i)-1 ; 
				x = (2*i)-1; 
			}
			while(1){
				if(s2==s1){
						cout << x-2 << endl; 
						break; 
				}
				else {
					x+=2; 
					s2+=x; 
				}
			}
			cout << endl;
		}
	}
	return 0;
}