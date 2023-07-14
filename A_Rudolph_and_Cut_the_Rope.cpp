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
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n; 
        int count  =0; 
        while(n--) {
            int a, b;
            cin >> a >> b; 
            if(a>b){
                count++; 
            }
        }
        cout << count << endl; 
    }
    return 0;
}