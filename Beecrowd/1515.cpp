#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
struct planet
{
    string name;
    int year, time, dif;
};

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    planet p[2000];
    while (tc != 0)
    {
        for (int i = 0; i < tc; i++)
        {
            cin >> p[i].name;
            cin >> p[i].year >> p[i].time;
            p[i].dif = p[i].year - p[i].time;
        }
        int ans = p[0].dif; 
        int pos = 0;
        for (int i = 1; i < tc; i++) 
        {
            if (p[i].dif < ans) 
            {
                ans = p[i].dif;
                pos = i;
            }
        }
        cout << p[pos].name << endl;
        cin >> tc; 
    }

    return 0;
}