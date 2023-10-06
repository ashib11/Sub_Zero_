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
   int t;
    cin >> t;

    while(t--)
    {
        long long n, k, sum = 0, back_face_greater = 0;
        cin >> n >> k;

        long long a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            if(b[i] > a[i])
                back_face_greater++;
        }

        if((n == k) || (k >= back_face_greater))
        
        {
            for(int i = 0; i < n; i++)
            {
                if(a[i] > b[i])
                    sum += a[i];
                else
                    sum += b[i];
            }
        }
        else
        {
            long long diff[n];
            for(int i = 0; i < n; i++)
                diff[i] = b[i] - a[i];

            vector<pair<int, int>> vp;

            for (int i = 0; i < n; i++) {
                vp.push_back(make_pair(diff[i], i));
            }

            sort(vp.rbegin(), vp.rend());

            for(int i = 0; i < n; i++)
            {
                if(vp[i].first > 0 && k != 0)
                {
                    sum += b[vp[i].second];
                    k--;
                }
                else
                    sum += a[vp[i].second];
            }
        }

        cout << sum << endl;
    }

    return 0;
}
