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
    vector<int> v = {2, 3, 4, 5, 6};
    for(auto value: v){
        cout << value << " " ;
    }
    cout << endl; 
    for(int &value: v) {
        value++; 
        cout << value << " " ;
    }
    cout << endl ;
    vector<pair<int,int>> v_p = {{1,2},{3,4}}; 
    for(auto &vp : v_p){
        cout << vp.first << " " << vp.second << endl; 
    }
    //auto == data type. for example pair<int,int>
    return 0;
}