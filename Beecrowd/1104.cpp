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
    int cAlice, bBetty;

    while (1)
    {

        int n;
        int last_value;
        cin >> cAlice >> bBetty;
        int alice[100000 + 10] = {0}, betty[100000 + 10] = {0};
        if (cAlice == 0 && bBetty == 0)
            break;

        for (int i = 0; i < cAlice; i++)
        {
            cin >> n;
            alice[n] = 1;
            last_value = n;
        }
        for (int i = 0; i < bBetty; i++)
        {
            cin >> n;
            betty[n] = 1;
            last_value = max(last_value, n);
        }
        int count = 0;
        int bount = 0;
        // cout << last_value << endl; 
        for (int i = 1; i <= last_value; i++)
        {
            if (alice[i] == 0 && betty[i] != 0)
            {
                count++;
            }
            if (alice[i] != 0 && betty[i] == 0)
                bount++;
        }
        if(bount<count) cout << bount <<"\n" ; 
        else cout << count << "\n" ; 
    }

    return 0;
}