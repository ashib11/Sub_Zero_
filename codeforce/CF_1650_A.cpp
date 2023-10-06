#include <bits/stdc++.h>
using namespace std;
void fastIO() {
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
}
int main()
{
    fastIO() ; 
    int tc;
    cin >> tc;
    while (tc--)
    {
        string a;
        char b;
        cin >> a >> b;
        int flag = 0;
        for (int i = 0; i < a.length(); i += 2)
        {
            if (a[i] == b)
            {
                cout << "YES\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "NO\n";
    }
    return 0;
}