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
int arr[1001];
vector<int> v;
int fun(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    }
    return count;
}
void hum()
{
    for (int i = 1; i <= 1000; ++i)
        arr[i] = fun(i);
}
void wow()
{

    for (int i = 1; i < 100; ++i)
    {
        for (int j = 1000; j >= 1; j--)
        {
            if (arr[j]==i) v.push_back(j); 
        }
    }
}
int main()
{
    fastIO();
    hum();
    wow(); 
    // cout << fun(1000) << endl;
    int tc; 
    cin >> tc; 
    for(int i =1 ; i<= tc; ++i) {
        cout << "Case " << i <<": " ; 
        int x; 
        cin >> x; 
        cout << v[x-1] << endl ;
    }
    // cout << v[1] << endl; 
    return 0;
}