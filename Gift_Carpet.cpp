#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}


bool cpet(int n, int m, vector<string>& carpet) {
    for (int c1 = 0; c1 < m; ++c1) {
        for (int c2 = c1 + 1; c2 < m; ++c2) {
            for (int c3 = c2 + 1; c3 < m; ++c3) {
                for (int c4 = c3 + 1; c4 < m; ++c4) {
                    bool f_v = false, f_i = false, f_k = false, f_a = false;
                    for (int r = 0; r < n; ++r) {
                        if (carpet[r][c1] == 'v') f_v = true;
                        if (carpet[r][c2] == 'i') f_i = true;
                        if (carpet[r][c3] == 'k') f_k = true;
                        if (carpet[r][c4] == 'a') f_a = true;
                    }
                    if (f_v && f_i && f_k && f_a){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main()
{
    fastIO();
    int tc; 
    cin >> tc; 
    while (tc--)
    {
        int n, m;
        cin >> n >> m;  
        vector<string> carpet(n);
        for (int j = 0; j < n; ++j) {
            cin >> carpet[j];  
        }
        bool result = cpet(n, m, carpet);
        cout << (result ? "YES" : "NO") << endl;
    }
    return 0;
}