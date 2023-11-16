#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
// find_by_order();
// order_of_key();
const int N = 1e5;
vector<int> v(N);
int lis[N], lds[N];

int main()
{
    int LIS(int indx)
    {
        int &posh = lis[indx];
        if (~posh)
            return lis[indx];
        posh = 1;
        for (int i = 0; i < indx; ++i)
        {
            if (v[indx] > v[i])
            {
                posh = max(posh, LIS(i) + 1);
            }
        }
        return posh;
    }
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        v.resize(n);
        memset(lis, -1, sizeof(lis));
        for (auto &it : v)
            cin >> it;
        int ans = 0;
        for (int i = 0; i < n; ++i)
            ans = max(ans, LIS(i));
        cout << ans << endl;
    }
    return 0;
}
