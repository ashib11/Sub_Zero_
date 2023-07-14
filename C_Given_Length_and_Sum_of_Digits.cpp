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
    int s, n;
    cin >> s >> n;
    string ans = "";
    if(n==1){
        cout << 1 ;
        for(int i =1 ; i < s; ++i ) cout << 0; 
        cout << " 1" ; 
        for(int i = 1; i< s; ++i) cout << 0 ;
        cout << endl; 
        return 0;
    }
    else if (s > 1 && n > 9)
    {
        while (n > 9)
        {
            n -= 9;
            ans += "9";
        }
        ans += to_string(n);
    }
    else if (s == 1 && n < 10)
    {
        ans += to_string(n);
    }
    else if (n == 0 || (s == 1 && n > 9))
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    string second = ans;
    reverse(ans.begin(), ans.end());
    if (ans.size() == s)
        cout << ans << " " << second << endl;
    else
        cout << -1 << " " << -1 << endl;
    return 0;
}