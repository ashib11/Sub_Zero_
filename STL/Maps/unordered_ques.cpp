#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    unordered_map<string,int> m; 
    int n; 
    cin >> n; 
    while(n--) {
        string a; 
        cin >> a; 
        m[a]++; 
    }
    int q; 
    cin >> q; 
    while(q--) {
        string s; 
        cin >> s; 
        cout << m[s] << endl; 
    }
    return 0;
}