#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    vector<int> v(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin() , v.end()); 
    cout << v[2] << endl; 
    return 0;
}