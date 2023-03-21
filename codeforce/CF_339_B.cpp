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
    int n, m;
    cin >> n >> m;
    int prev = 1;
    long long time = 0;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        if (a >= prev) {
            time += a - prev;
        } else {
            time += n - prev + a;
        }
        prev = a;
    }
    cout << time << endl;
    return 0;
}