#include <bits/stdc++.h>
#include<fstream> 
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    map<int, set<string>> m;
    int n;
    cin >> n;
    int marks;
    for (int i = 0; i < n; ++i)
    {
        cin >> marks;
        cout << marks;
        // string name;
        // cin >> name >> marks;
        // m[marks].insert(name);
    }
  
        
    return 0;
}