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
    int n;
    string s1, s2, s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        s1 += s;
    }
    s2 = s1;
    reverse(s2.begin(), s2.end());
    if (s2 == s1)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}