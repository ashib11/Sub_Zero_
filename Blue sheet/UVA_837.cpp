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
bool cmp(pair<string, pair<int, pair<int, int>>> &a, pair<string, pair<int, pair<int, int>>> &b)
{
    if (a.second.second.first == b.second.second.first)
    {
        if (a.second.second.second == b.second.second.second)
        {
            return a.second.first < b.second.first;
        }
        return a.second.second.second < b.second.second.second;
    }
    return a.second.second.first > b.second.second.first;
}
int main()
{
    fastIO();
    int n, p;
    string requirements;
    int count = 0;
    while (1)
    {

        cin >> n >> p;
        if (n == 0 && p == 0)
            break;
        cin.ignore();
        for (int i = 0; i < n; ++i)
        {
            getline(cin, requirements);
        }
        string name;
        float price, rm;
        string garbage;
        vector<pair<string, pair<int, pair<int, int>>>> v;
        for (int i = 0; i < p; ++i)
        {
            getline(cin, name);
            cin >> price >> rm;
            cin.ignore();
            v.push_back({name, {i, {rm, price}}});

            for (int j = 0; j < rm; ++j)
            {
                getline(cin, garbage);
            }
        }
        sort(v.begin(), v.end(), cmp);
            count++;
        if(count > 1) cout << endl; 
        cout << "RFP #" << count << endl;
        // for (auto it : v)
        // {
        //     cout << it.first << endl;
        // }
        cout << v[0].first << endl; 
    }
    return 0;
}