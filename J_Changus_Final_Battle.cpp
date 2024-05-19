#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define TEMPLATE template <typename T>
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
ll n;
ll s(ll n)
{
	return n * (n + 1) / 2;
}
bool chck(ll mid)
{
	ll target = n - s(mid-1);
	ll sum = s(mid); 
	if(sum <=target) return true;  
	return false; 
}  
void solve()
{

	cin >> n ;
	ll l = 1, h = n;
	while (h >= l)
	{
		ll mid = (l + h) / 2;
		if (chck(mid))
		{
			l = mid + 1;
		}
		else
		{
			h = mid - 1;
		}
	}
	cout << h+(h-1) << endl;
}

int main()
{
	fastIO();
	int tc = 1;
	cin >> tc;
	for (int i = 1; i <= tc; ++i)
	{
		solve();
	}
	return 0;
}
