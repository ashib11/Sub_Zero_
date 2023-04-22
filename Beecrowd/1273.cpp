#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();

    int n, flag = 0;
    while (cin >> n && n != 0)
    {
        if (flag)
            cout << endl;
        vector<string> v(n);
        int max_l = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            max_l = max(max_l, (int)v[i].size());
        }
        for (int i = 0; i < n; ++i)
        {
            int total_space = max_l - v[i].size();
            cout << string(total_space, ' ') << v[i] << endl;
        }
        flag = 1;
    }
    return 0;
}