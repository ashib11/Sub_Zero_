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
    int test_case; 
    cin >> test_case; 
    double pi = 2.0 * acos(0.0); 
    // cout << pi << endl; 
    for(int i=1; i<=test_case;++i) {
        double r; 
        cin >> r;  
        double area_sq = 2*r * 2 * r; 
        double area_circle = pi*r*r; 
        printf("Case %d: %.2lf\n",i,(area_sq - area_circle));
    }
    return 0;
}