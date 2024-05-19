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

void solve()
{
	int cut = 0;
	string str; cin >> str;
	int first_zero = -1;
	for (int i = 0; i < str.size() - 1; ++i) {
		if (str[i] == '0' and first_zero == -1 and str[i+1]=='1') {
			first_zero=1; 
			continue; 
		}
		if (str[i] = !str[i + 1]) 
			cut++;
	}
	cout << cut << endl;
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
