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
    int N = 1e5 + 10;
    int arr[N] = {0};
    vector<pair<int, int>> v;
    for (int i = 1; i <= (3 * n); ++i)
    {
        int a;
        cin >> a;
        arr[a]++;
        if (arr[a] == 2)
        {
            arr[a] = 0;
            v.push_back({i, a});
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        cout << v[i].second << " ";
    }
    cout << endl;
    return 0;
}