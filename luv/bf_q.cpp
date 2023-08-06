#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const int N = 1e5;
vector<int> g[N];
bool vis[8][8];
int level[8][8];
int getX(string s)
{
    return s[0] - 'a';
}
int getY(string s)
{
    return s[1] - '0';
}
int bfs(string source, string destination)
{
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(destination);
    int destY = getY(destination);
    queue<pair<int, int>> q;
    q.push({sourceX, sourceY}) ;

    while (!q.empty())
    {
    }
}
void reset()
{
    memset(vis, 0, sizeof(vis));
    memset(level, 0, sizeof(level));
}
void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        reset(); 
        string a, b;
        cin >> a >> b;
        cout << bfs(a, b) << endl;
    }
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}