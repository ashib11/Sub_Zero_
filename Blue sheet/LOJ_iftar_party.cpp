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
    for (int i = 1; i <= tc; i++)
    {
        vector<long long> v;
        long long p, l;
        cin >> p >> l;
        cout << "Case " << i << ":";
        bool possible = false;
        for (long long k = 1; k * k <= (p - l); k++)
        {
            if ((p - l) % k == 0)
            {
                long long q = (p - l) / k;
                if (q > l)
                {
                    v.push_back(q); 
                    possible = true;
                }
                if (k > l && k != q)
                {
                   v.push_back(k); 
                    possible = true;
                }
            }
        }
        sort(v.begin(), v.end()); 
        if (!possible)
        {
            cout << " impossible";
        }
        
        else {
            for(auto it: v){
                cout << " "<< it; 
            }
        }
        cout << endl;
    }
    
    return 0;
}