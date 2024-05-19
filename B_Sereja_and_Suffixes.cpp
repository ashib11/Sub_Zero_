#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    set<int> st; 
    int ans[n]; 
    for(int i=  n-1; i >=0; --i){
        st.insert(arr[i]); 
        ans[i] = st.size(); 
    }
  
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        cout << ans[x - 1] << endl;
    }

    return 0;
}