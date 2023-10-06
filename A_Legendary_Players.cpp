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
    string a; 
    cin >> a; 
    if(a == "tourist"){
        cout << "3858"; 
    }
    else  if(a == "ksun48"){
        cout << "3679"; 
    }
     else  if(a == "Benq"){
        cout << "3658"; 
    }
     else  if(a == "Um_nik"){
        cout << "3648"; 
    }
     else  if(a == "apiad"){
        cout << "3638"; 
    }
     else  if(a == "Stonefeang"){
        cout << "3630"; 
    }
     else  if(a == "ecnerwala"){
        cout << "3613"; 
    }
     else  if(a == "mnbvmar"){
        cout << "3555"; 
    }
     else  if(a == "newbiedmy"){
        cout << "3516"; 
    }
     else  if(a == "semiexp"){
        cout << "3481"; 
    }

}
int main()
{
    fastIO();
    int tc; 
    tc = 1; 
    //cin >> tc; 
    while (tc--)
    {
        solve();
    }
    return 0;
}