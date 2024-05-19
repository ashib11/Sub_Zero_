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

int longestConsecutive(vector<int> &v)
{
	int ans = 0;
	int cnt = 0;
	for (int i = 0; i < (int)v.size() - 1; ++i)
	{
		if (v[i + 1] - v[i] <= 1)
		{
			cnt = 1;
			for (int j = i + 1; j < (int)v.size(); ++j)
			{
				if (v[j] - v[j - 1] <= 1)
					cnt++;
				else
				{
					i = --j;
					ans = max(ans, cnt);
					// cout << cnt << endl;
					cnt = 0;
					break;
				}
			}
		}
	}
	// cout << ans << endl;
	return ans;
}
void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto &i : v)
		cin >> i;
	sort(all(v));
	for (auto &i : v)
		cout << i << ' ';
	cout << endl;
	cout << longestConsecutive(v) << endl;
}

int main()
{
	fastIO();
	int tc = 1;
	// cin >> tc;
	for (int i = 1; i <= tc; ++i)
	{
		solve();
	}
	return 0;
}
