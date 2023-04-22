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
    int tc;
    cin >> tc;
    while (tc--)
    {
        string a[50];
        for (int i = 0;; i++)
        {
            cin >> a[i];
            if (a[i] == "\n")
                break;
        }
        for (int i = 0; i < 10; i++)
        {
            cout << a[i] << endl;
        }
    }

    return 0;
}