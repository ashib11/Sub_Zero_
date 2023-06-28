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
int main()
{
	fastIO();
	int n;
	cin >> n;
	vector<int>shop(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> shop[i];
	}
	sort(shop.begin(), shop.end());
	int x;
	cin >> x;
	while (x--) {
		int q;
		cin >> q;
		auto it = upper_bound(shop.begin(), shop.end(), q);
		cout << ( it - shop.begin() ) << endl;
	}
	return 0;
}