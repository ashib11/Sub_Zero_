#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
						 tree_order_statistics_node_update>;
void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
const int N = 1e5 + 10;
vector<int> pre;
void precal()
{
	for (int i = 0; i * i < N; i++)
	{
		pre.push_back(i * i);
	}
}
void solve()
{
	int n;
	cin >> n;
	vector<int> ans(n, -1);
	for (int i = n - 1; i >= 0; --i)
	{
		if (ans[i] == -1)
		{
			int val = i;
			auto it = *lower_bound(all(pre), val);
			auto inx = lower_bound(all(pre), val) - pre.begin();
			int k = it - val;
			if (ans[k] != -1)
			{
				int yo = pre[inx + 1];
				int dif = yo - val;
				ans[val] = dif;
				ans[dif] = val;
				continue;
			}
			ans[i] = k;
			ans[k] = val;
		}
	}
	map<int, int> mp;
	for (auto it : ans)
	{
		mp[it]++;
		cout << it << ' ';
	}
	cout << endl; 
	for (auto [a, b] : mp)
	{
		cout << a << ' ' << b << endl; 
	}
	cout << endl;
}

int main()
{
	fastIO();
	int tc = 1;
	precal();
	cin >> tc;
	while (tc--)
	{
		solve();
	}
	return 0;
}