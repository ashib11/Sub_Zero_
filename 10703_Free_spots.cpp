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
    int w, h, n;
    while (cin >> w >> h >> n  && w != 0 && h != 0)
    {

        int arr[w][h] ;
        memset(arr,0,sizeof(arr)); 
        // vector<vector<int>> arr(w,vector<int>(h,0)); 
        int ans = w * h;
        for (int i = 0; i < n; ++i)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            for (int j = min(x1, x2) - 1; j < max(x1, x2); ++j)
            {
                for (int k = min(y1, y2) - 1; k < max(y1, y2); ++k)
                {
                    if (arr[j][k] == 0)
                    {
                        ans--;
                        arr[j][k] = 1;
                    }
                }
            }
        }
        if (ans == 0)
        {
            cout << "There is no empty spots." << endl;
        }
        else if (ans == 1)
        {
            cout << "There is one empty spot." << endl;
        }
        else
            cout << "There are " << ans << " empty spots." << endl;
       
    }
    return 0;
}