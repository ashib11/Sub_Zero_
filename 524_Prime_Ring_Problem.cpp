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
vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 37, 41};
bool primeChck(int n)
{
    for (auto it : prime)
    {
        if (n == it)
            return false;
    }
    return true;
}
vector<int> ans;
void fun(int x, int n)
{
    if (x == n)
    {
        return;
    }
    for (int i = x + 1; i <= n; ++i)
    {
        if (primeChck(x + i))
        {
            ans.push_back(i);
            fun(i, n);
        }
    }
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    int n;
    while (cin >> n)
    {
        ans.clear(); 
        ans.push_back(1); 
        fun(1, n);
    }
    return 0;
}