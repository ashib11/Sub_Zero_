#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    string a;
    cin >> a;
    int nq;
    cin >> nq;

    for (int i = 0; i < nq; ++i)
    {
        string str1;
        cin >> str1;

        size_t found = a.find(str1);
        bool isFound = false;

        while (found != string::npos)
        {
            cout << "Found at index: " << found << endl;
            isFound = true;
            found = a.find(str1, found + 1);
        }

        if (!isFound)
            cout << "NO" << endl;
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
