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
    while(tc--) {
        int arr[7]; 
        for(int i=0; i<7;++i) {
            cin >> arr[i]; 
        }

        cout << arr[0] << " " << arr[1] << " ";
        if(arr[0]+arr[1]==arr[2]) cout << arr[3] << endl;
        else cout << arr[2] << endl; 
    }
    return 0;
}