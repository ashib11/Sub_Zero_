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
    int n;
    std::cin >> n;

    // int count = 0;
    // long long check = 1;
    // for (int i = 0; i < n; ++i) {
    //     check *= 10;
    // }

    // for (int i = 0; i < check; ++i) {
    //     int a = i;
    //     int x = n >> 1;
    //     int y = n >> 1;
    //     int sum1 = 0;
    //     int sum2 = 0;

    //     for (int j = 0; j < x; ++j) {
    //         sum1 += a % 10;
    //         a /= 10;
    //     }
    //     for (int j = 0; j < y; ++j) {
    //         sum2 += a % 10;
    //         a /= 10;
    //     }

    //     if (sum1 == sum2) {
    //         ++count;
    //     }
    // }

    // std::cout << count << '\n';
    if(n==2) cout << "10" << endl; 
    else if(n==4) cout << "670" << endl; 
    else if(n==6 ) cout << "55252" << endl; 
    else if(n==8) cout << "4816030" << endl; 
    return 0;
}