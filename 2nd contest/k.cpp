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
    int s;
    cin >> s;
    vector<int> v;
    int dif = 100000;
    int total = 0;
    while (s--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        total += x;
    }
    int new_sum=0; 
    sort(v.begin(), v.end());
    for(int i = v.size()-1 ; i>=0 ; --i) {
        if(new_sum< total) {
            total-=v[i]; 
            new_sum += v[i]; 
        }
    }
    dif = abs(total - new_sum); 
    cout << dif << endl;
    return 0;
}