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
bool cmp(pair<pair<int, int>, string> a, pair<pair<int, int>, string> b)
{
    if (a.first.first == b.first.first)
    {
        if (a.first.second == b.first.second)
            return a.second < b.second;
        return a.first.second < b.first.second;
    }

    return a.first.first > b.first.first;
}
int main()
{

    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <=tc; ++i)
    {
        cout << "Case " << i << ":\n"; 
        vector<pair<pair<int, int>, string>> v;
        for (int j = 0; j < 10; ++j)
        {
            string str;
            int x, y;
            cin >> str >> x >> y;
            v.push_back({{x, y}, str});
        }

        sort(v.begin(), v.end(), cmp);
    
        vector<string> a;
        vector<string> b;
        int count = 1;
        for (auto it : v)
        {
            // cout << it.first.first << " " << it.first.second << " ";
            // cout << it.second << endl;

            if (count >= 6)
                b.push_back(it.second);
            else
                a.push_back(it.second);
            count++;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout << "(";
        count = 0;
        for (auto it : a)
        {
            cout << it;
            count++;
            if (count != 5)
                cout << ", ";
        }
        cout << ")\n(";
        count = 0;
        for (auto it : b)
        {
            cout << it;
            count++;
            if (count != 5)
                cout << ", ";
        }
        cout << ")\n";

    }
    return 0;
}