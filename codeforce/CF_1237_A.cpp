#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long lon 
#define i_mn INT_MIN 
#define i_mx INT_MAX 
#define p_b push_back 
#define yes cout<<"YES\n" 
#define no cout << "NO\n" 
#define getln(s) geline(cin,s) 
#define point(x,d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            if (a % 2 == 0)
            {
                arr[i] += 1;
                a++;
            }
            else
            {
                arr[i] -= 1;
                a++;
            }
        }
        cout << arr[i] / 2 << endl;
    }

    return 0;
}