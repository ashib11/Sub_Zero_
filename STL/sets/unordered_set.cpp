#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void  print(unordered_set<string> &s){
    for(string value : s){
        cout << value << endl; 
    }
}
int main()
{
    fastIO();
    unordered_set<string> s; 
    int n; 
    cin >> n; 
    while(n--) {
        string x; 
        cin >> x; 
        s.insert(x) ; 
    }
    int q; 
    cin >> q; 
    while(q--) {
        string a; 
        cin >> a; 
        auto it = s.find(a) ; 
        if(it!=s.end()) {
            cout << "YES\n";
        }
        else cout << "NO\n"; 
    }
    return 0;
}   