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
vector<string> v = {"A+", "A-", "B+", "B-", "O+", "O-"};
string generaterando(int size)
{
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int charSize = sizeof(charSize) - 1;
    string result;

    for (int i = 0; i < size; ++i)
    {
        int randomIndex = rand() % charSize;
        result += charset[randomIndex];
    }
    return result;
}
int getRandomNumber(int min, int max)
{
    return min + (rand() % (max - min + 1));
}
void solve()
{

    int n = getRandomNumber(9, 10);
    cout << n << endl;
    string frac = generaterando(n);

    cout << frac << " ";
    int indx = getRandomNumber(0, 5);
    string blood = v[indx];
    cout << blood << endl;
    int lenght = getRandomNumber(50, 50);
    cout << lenght << endl;
    int num_people = getRandomNumber(999, 1000);
    cout << num_people << endl;
    for (int j = 0; j < num_people; ++j)
    {
        int ind = getRandomNumber(0, 5);
        string bg = v[ind];
        string name = generaterando(lenght);
        cout << name << " " << bg << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
        cout << endl << endl; 
    }
    return 0;
}