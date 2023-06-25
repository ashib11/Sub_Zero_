#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
void solve() {
	int n;
	cin >> n;

	std::vector<int> v(n);
	for (int i = 0 ; i < n ; ++i) {
		cin >> v[i];
	}

	for (int x = 0 ; x <= n ; ++x) {
		int cnt = 0 ;
		for (int i = 0 ; i < n; ++i) {
			cnt += (x < v[i]);
		}
		if(cnt == x){
			cout << x << endl; 
			return ;
		}
	}
	cout << -1 << endl; 
}
int main()
{
	fastIO();
	int tc;
	cin >> tc;
	while(tc--)
		solve(); 
	return 0;
}