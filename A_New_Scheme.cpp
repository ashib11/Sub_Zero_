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
    vector<int> v;
    for (int i = 0; i < 9; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i =0 ; i < 8 ; ++i){
        if((v[i]>v[i+1])|| v[i]%5!=0 || v[i]<100 || v[i]>675){
            cout << "No" << endl; 
            return 0; 
        }
    }
    cout << "Yes" << endl; 
    return 0;
}