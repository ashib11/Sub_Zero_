#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
template<typename T, typename T_iterable>
vector<pair<T, int>> run_length_encoding(const T_iterable &items) {
	vector<pair<T, int>> runs;
	T previous;
	int count = 0;

	for (const T &item : items)
		if (item == previous) {
			count++;
		} else {
			if (count > 0)
				runs.emplace_back(previous, count);

			previous = item;
			count = 1;
		}

	if (count > 0)
		runs.emplace_back(previous, count);

	return runs;
}
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();

    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<char ,int>>cc = run_length_encoding<char>(s);

    int ans = 0;
    for(auto [x,y]:cc){
        if(x == 'a' && y>1)ans+=y;
    }

    cout << ans << endl;
    return 0;
}