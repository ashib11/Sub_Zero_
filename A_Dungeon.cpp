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
    void solve()
    {
        vector<int> v(3);
        cin >> v[0];
        cin >> v[1];
        cin >> v[2];
        ll sum = 0;
        for (int i = 0; i < 3; ++i)
        {
            sum += v[i];
        }
        if (sum % 9 != 0)
            cout << "NO" << endl;
        else if (min(v[0], min(v[1], v[2])) >= (sum)/9)
        cout << "YES" << endl; 
        else cout << "NO" << endl; 
    }
    int main()
    {
        fastIO();
        int tc;
        cin >> tc;
        while (tc--)
        {
            solve();
        }
        return 0;
    }