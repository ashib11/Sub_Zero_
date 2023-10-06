#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
ll cnt = 0;
ll partition(vector<ll> &v, ll l, ll h)
{
    ll pivot = v[l];
    ll pivotind = l;
    for (ll j = l + 1; j <= h; ++j)
    {
        if (v[j] < pivot)
        {
            v[pivotind] = v[j];
            v[j] = v[pivotind + 1];
            pivotind++;
            cnt++;
        }
    }
    v[pivotind] = pivot;
    return pivotind;
}
void quickSort(vector<ll> &v, ll l, ll h)
{
    if (l < h)
    {
        ll p = partition(v, l, h);
        quickSort(v, l, (p - 1));
        quickSort(v, (p + 1), h);
    }
}

int main()
{
    fastIO();
    ll n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        vector<ll> v;
        for (ll i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        quickSort(v, 0, v.size() - 1);
        cout << cnt << endl;
        cnt =0 ; 
    }
    return 0;
}