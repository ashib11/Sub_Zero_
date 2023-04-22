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
    int tc; 
    cin >> tc; 
    for(int i=1; i<=tc; ++i) {
            int my_pos, lif_pos; 
            cin >> my_pos >> lif_pos; 
            int total_time = abs(lif_pos-my_pos)*4 +abs(my_pos)*4 + 19; 
            cout <<"Case " << i << ": " << total_time << endl;  
    }
    return 0;
}