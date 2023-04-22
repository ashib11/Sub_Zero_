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
    vector<int> v(100000);
    v[0] = 0;
    v[1] = 1;

    for (int i = 1; i <= (100000 / 2); ++i)
    {
        v[2 * i] = v[i];
        v[2 * i + 1] = v[i] + v[i + 1];
    }
    int n; 
    while(cin >> n) {
        if(n==0) break; 
        int highest = 0; 
        for(int i=0; i<=n; i++){
            highest = max(highest,v[i]); 
        }
        cout << highest << endl; 
    }
    return 0;
}