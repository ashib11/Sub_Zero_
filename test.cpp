/*
Author: Abid Hasan
Created:  13-November-2023  20:27:29
*/

#include <bits/stdc++.h>
using namespace std;
#define ios_base          \
    ::sync_with_stdio(0); \
    cin.tie(0);           \
    cout.tie(0);
#define ll long long
#define int ll
#define endl "\n"
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define f(i, x) for (int i = 0; i < x; i++)
#define pb push_back
#define pob pop_back
#define mp make_pair
#define deb(x) cout << #x << " = " << x << endl;
#define all(x) x.begin(), x.end()
#define sz(x) x.size()
#define fi first
#define se second

// void IO(){
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
// }

void lulu(int n)
{
    if (n == 0)
    {
        return;
    }
    lulu(n / 10);
    cout << n % 10 << " ";
}

signed main()
{

    // IO();
    w(tc)
    {
        int n;
        cin >> n;
        if (n == 0)
            cout << 0 << endl;
        else
            lulu(n);
        cout << endl;
    }
}