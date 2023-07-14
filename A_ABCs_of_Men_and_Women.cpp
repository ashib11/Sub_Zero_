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
    string a;
    cin >> a;

    vector<pair<int, string>> v;
    v.push_back({0, "Alice"});
    v.push_back({0, "Bob"});
    v.push_back({0, "Cindy"});
    bool alice = false, bob = false, cindy = false;
    if (a.size() == 3)
        bob = true;
    else if (a.size() == 5)
    {
        alice = true;
        cindy = true;
    }
    if (bob)
    {
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] == v[1].second[i])
            {
                v[1].first++;
            }
            else if (a[i] != v[1].second[i] && a[i] != '.')
            {
                bob = false;
            }
        }
    }
    if (alice)
    {
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] == v[0].second[i])
            {
                v[0].first++;
            }
            else if (a[i] != v[0].second[i] && a[i] != '.')
            {
                alice = false;
            }
        }
    }
    if (cindy)
    {
        for (int i = 0; i < a.size(); ++i)
        {

            if (a[i] == v[2].second[i])
            {
                v[2].first++;
            }
            else if (a[i] != v[2].second[i] && a[i] != '.')
            {
                cindy = false;
            }
        }
    }

    if (alice + bob + cindy > 1)
        cout << "CAN'T TELL" << endl;
    else if (alice + bob + cindy == 1)
    {
        if (alice)
            cout << "Alice" << endl;
        else if (bob)
            cout << "Bob" << endl;
        else if (cindy)
            cout << "Cindy" << endl;
        else
            cout << "SOMETHING'S WRONG" << endl;
    }
    else  cout << "SOMETHING'S WRONG" << endl;

    return 0;
}