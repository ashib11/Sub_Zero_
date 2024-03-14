#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int int64_t
#define uint uint64_t
#define double_t long double
#define i_mn INT_MIN
#define i_mx INT_MAX
#define ui_mx UINT_MAX
#define ll_mn LLONG_MIN
#define ll_mx LLONG_MAX
#define ull_mx ULLONG_MAX
#define fst first
#define snd second
#define beg begin()
#define end end()
#define rbeg rbegin()
#define rend rend()
#define dcn greater<>()
#define m_p make_pair
#define m_t make_tuple
#define p_b push_back
#define p_f push_front
#define u_b upper_bound
#define l_b lower_bound
#define n_p next_permutation
#define p_p prev_permutation
#define getln(s) getline(cin, s)
#define mem(ar, v) memset(ar, v, sizeof(ar))
#define for_(i, s, e, x) for (int i = s; (x > 0) ? (i < e) : (i >= e); i += x)
#define nl cout << "\n";
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define at_index(p) find_by_order(p)
#define index_of(v) order_of_key(v)
#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
template <class T>
using index_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class K, class V>
using index_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename... Args>
void in(Args &...args) { (cin >> ... >> args); }
template <typename... Args>
void out(Args... args) { (cout << fixed << setprecision(8) << ... << args); }
struct Runtime
{
    clock_t start;
    Runtime()
    {
        start = clock();
    }
    ~Runtime()
    {
        cout << "Runtime: " << fixed << setprecision(3) << (double)(clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};
struct Truple
{
    int t, x, r;
};

const int N = 1e6 + 5;
int m, n;
Truple tp[1000];
bool valide(int tm)
{
    int tot = 0;
    for_(i, 0, n, 1)
    {
        int a = tp[i].t * tp[i].x + tp[i].r;
        int b = tm / a, c = tm % a;
        tot += tp[i].x * b + min(tp[i].x, c / tp[i].t);
        if (tot >= m)
            return 1;
    }
    return 0;
}
void each(int tm)
{
    int ans[n];
    for_(i, 0, n, 1)
    {
        int a = tp[i].t * tp[i].x + tp[i].r;
        int b = tm / a, c = tm % a;
        ans[i] = min(tp[i].x * b + min(tp[i].x, c / tp[i].t), m);
        m -= ans[i];
        out(ans[i], " ");
    }
    nl;
}
void solve()
{
    in(m, n);
    for_(i, 0, n, 1) in(tp[i].t, tp[i].x, tp[i].r);
    int lo = 0, hi = 1e15;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (valide(mid))
            hi = mid;
        else
            lo = mid + 1;
    }
    if (valide(lo))
    {
        out(lo, "\n");
        each(lo);
    }
    else
    {
        out(hi, "\n");
        each(hi);
    }
}
signed main()
{
#ifndef ONLINE_JUDGE
    Runtime _;
#endif
    fast_IO;
    int tc = 1;
    // in(tc);
    for_(cs, 1, tc + 1, 1)
    {
        // out("Case ", cs, ": ");
        solve();
    }
}