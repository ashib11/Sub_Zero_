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
const ll N = 2e5+10;
ll a[N];
ll cnt = 0;
void merge(ll l, ll r, ll m)
{
    ll l_sz = m - l + 1;
    ll L[l_sz + 1];
    ll r_sz = r - m; // r-(m+1)-1
    ll R[r_sz + 1];
    for (ll i = 0; i < l_sz; ++i)
    {
        L[i] = a[i + l];
    }
    for (ll i = 0; i < r_sz; ++i)
    {
        R[i] = a[i + m + 1];
    }
    L[l_sz] = R[r_sz] = INT_MAX;
    ll l_i = 0;
    ll r_i = 0;
    for (ll i = l; i <= r; ++i)
    {
        if (L[l_i] <= R[r_i])
        {
            a[i] = L[l_i];
            ++l_i;
        }
        else
        {
            cnt++;
            a[i] = R[r_i];
            ++r_i;
            
        }
    }
}
void mergeSort(ll l, ll r)
{
    if (l == r)
        return;
    ll mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    cnt = 0;
    mergeSort(0, n - 1);
    cout << cnt << endl;
}
int main()
{
    fastIO();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}