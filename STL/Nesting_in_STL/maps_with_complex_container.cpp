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
    map<pair<string, string>, vector<int>> m;
    set<pair<int, int>> st; 
    
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string fn, ln;
        int test;
        cin >> fn >> ln >> test;
        for (int j = 0; j < test; ++j)
        {
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }
    for (auto &it : m)
    {
        auto &full_name = it.first;
        auto &list = it.second;
        cout << full_name.first << " " << full_name.second << endl;
        // cout << list.size() << endl;
        for (auto &element : list)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}