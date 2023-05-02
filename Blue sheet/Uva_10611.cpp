#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define F(i, a, b) for (int i = a; i < b; i++)
#define B(i, b, a) for (int i = b; i >= a; i--)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
// int closest(vector<int> &vec, int value)
// {
//     auto const it = std::lower_bound(vec.begin(), vec.end(), value);

//     return *it;
// }

int main()
{
    fastIO();
    int n;
    cin >> n;
    vector<int> v;
    for(int i =0 ; i<n ;++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int nq;
    cin >> nq;
    
    while (nq--)
    {
        int q;
        cin >> q;
         auto x = lower_bound(v.begin(),v.end(),q); 
         auto y = upper_bound(v.begin(),v.end(),q);  
         
        if(x==v.begin()) cout << "X ";
        else cout << *--x << " "; 
        if(y==n+v.begin()) cout << "X" << endl; 
        else cout << *y << endl; 
    }
    return 0;
}