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
    map<int, int> m; 
    int n; 
    cin >> n; 
    while (n--)
    {
        int x; 
        cin >> x; 
        m[x]++; 
    }
    cout << "ans: \n"; 
    for(auto pr: m) {
        cout << pr.first << " " << pr.second <<" bar" << endl; 
    }
    return 0;
}