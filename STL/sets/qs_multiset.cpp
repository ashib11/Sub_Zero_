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
    while(tc--) {
        int n,k;
        cin >> n >> k; 
        multiset<long long> candy; 
        for (int i = 0; i < n; ++i)
        {
            long long candy_ct; 
            cin >> candy_ct; 
            candy.insert(candy_ct); 
        }
        long long total_candies=0; 
        for(int i=0; i<k;++i) {
            auto last_it = (--candy.end()); 
            int highest = *last_it; 
            total_candies+=highest; 
            candy.erase(last_it); 
            candy.insert(highest/2); 
        }
        cout << total_candies << endl; 
    }
    
    return 0;
}