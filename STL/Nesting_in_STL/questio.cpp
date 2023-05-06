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
    map<int, multiset<string>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int marks;
        string name;
        cin >> name >> marks;
        m[marks].insert(name);
    }
    auto last_it = --m.end();
    while (true)
    {
        auto &students = last_it->second;
        int marks = last_it->first;
        for (auto student : students)
        {
            cout << student << " " << marks << endl;
        }
        if (last_it == m.begin())
            break;
        last_it--;
    }
    return 0;
}