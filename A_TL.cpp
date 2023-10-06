#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> ac;
    vector<int> wa;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ac.push_back(x);
    }
    for (int i = 0; i < m; ++i)
    {
        int y;
        cin >> y;
        wa.push_back(y);
    }
    int acx = *max_element(ac.begin(), ac.end());
    int acm = *min_element(ac.begin(), ac.end());
    acx= max(acx, acm*2); 
    int wax = *min_element(wa.begin(), wa.end());
    if ( acx < wax)
        cout << acx << endl;
    else
        cout << "-1" << endl;
}