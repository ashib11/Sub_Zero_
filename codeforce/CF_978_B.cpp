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
    int s;
    cin >> s;
    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < s - 2; i++)
    {
        if ((a[i] == a[i + 2]) && (a[i] == a[i + 1] && a[i] == 'x'))
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}