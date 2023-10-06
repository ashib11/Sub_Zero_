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
    int n;
    cin >> n;
    char a;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a == '8')
            cnt++;
    }
    if(n>=8){
        int a = n/11; 
        cout << min(a,cnt) << endl; 
    }
    else cout << 0 << endl ;
    return 0;
}