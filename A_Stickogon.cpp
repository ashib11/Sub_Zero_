#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> cnt;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }
        if (n < 3)
        {
            cout << "0\n";
            continue;
        }
        for (auto u : cnt)
        {
            if (u.second >= 3)
            {
                sum += ceil(double(u.second / 3));
            }
        }

        cout << sum << endl;
    }

    return 0;
}