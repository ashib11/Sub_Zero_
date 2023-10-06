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
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
   vector<pair<int,string>> v; 
    for (int i = 1; i <= tc; ++i)
    {
        v.clear(); 
        cout << "Case " << i << ": ";
        int s;
        cin >> s;
       for(int j =0 ; j<s ; ++j)
        {
            string n;
            int x,y,z; 
            cin >> n >> x >> y >> z; 
            v.push_back({(x*y*z),n}); 
        }
        sort(v.begin(),v.end()); 
        // for(auto it : v){
        //     cout << it.first << " " << it.second << endl; 
        // }
        if(v[0].first!=v[s-1].first){
                cout << v[s-1].second << " took chocolate from "<< v[0].second<< endl; 
        }
        else cout << "no thief" << endl; 
    }
    return 0;
}