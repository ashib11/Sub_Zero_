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
    int teamNo, matchNo;
    while (cin >> teamNo >> matchNo && teamNo != 0)
    {
        int sum = 0;
        for (int i = 0; i < teamNo; i++)
        {
            string a;
            int p;
            cin >> a >> p;
            sum += p;
        }
        cout << (matchNo * 3) - sum << endl;
    }

    return 0;
}