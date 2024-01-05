#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sort(x) sort(x.begin(), x.end())
#define forin(x, n)             \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define endl "\n"
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

bool pos(vector<int> &v, double mid, int k)
{
    int c = 0;

    for (int i = 0; i < v.size(); i++)
    {
        c += (v[i] / mid);
    }

    if (c >= k)
        return true;
    else
        return false;
}
double BS(vector<int> &v, int k)
{

    double low = 0, high = 1e7;
    // cout << log(1e7) << endl;
    int x = 20;
    while (x--)
    {
        double mid = (low + high )/ 2;

        if (pos(v, mid, k))
            low = mid ;
        else
            high = mid ;
    }

    return low;
}
int main()
{
    fast

        int t = 1;
    // cin>>t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        forin(v, n);
        sort(v);

        // cout << BS(v,k) << endl;
        printf("%.5lf\n", BS(v, k));
    }

    return 0;
}