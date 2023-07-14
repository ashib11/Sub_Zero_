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
const int N = 1e5 + 10;
bool visited[N];
vector<int> grph[N];
int dept[N], height[N];
void dfs(int vertex, int parent = 0) {

	for (int child : grph[vertex]) {


		if (child == parent) continue;

		dept[child] = dept[vertex] + 1; 

		dfs(child, vertex);
		height[vertex] = max(height[vertex],height[child]+1); 

	}

}
int main()
{
	fastIO();
	int n; cin >> n;

	for (int i = 0 ; i < (n - 1); ++i) { //n-1 edges for tree 
		int x, y;
		cin >> x >> y;
		grph[x].push_back(y);
		grph[y].push_back(x);
	}

	dfs(1);
	for(int i = 1 ; i <= n ; ++i){
		cout << dept[i] << " " << height[i] << endl; 
	}
}