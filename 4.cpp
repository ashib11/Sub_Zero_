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
    int rno, marks; 
    string name; 
    double sum =0 ; 
    for(int i =0 ; i < 3 ; ++i) {
        cin >> marks; 
        sum+=marks; 
    }
    cout << sum << " " << sum/3.0 << " " <<  (sum)/300 << endl; 
    return 0;
}