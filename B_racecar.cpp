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
    vector<string> v;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(j!=i)
            {
                string ans = v[j] + v[i];
                string check = ans;
                reverse(ans.begin(), ans.end());
                if (ans == check)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}