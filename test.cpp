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

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int x = min(a,b); 
	int y = max(a,b);
	int x1 = min(c,d);
	int y1 = max(c,d);
	bool hen, ten; 
	hen = x>=x1 and x <= y1; 
	ten = y>=x1 and y <=y1; 
	if(hen!=ten){
		cout << "YES" << endl; 
	}
	else cout << "NO" << endl; 

}

int main()
{
	fastIO();
	int tc = 1;
	cin >> tc;
	for (int i = 1; i <= tc; ++i)
	{
		// cout << "Case " << i << ": ";
		solve();
	}
	return 0;
}