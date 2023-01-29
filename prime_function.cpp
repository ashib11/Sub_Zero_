#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n);
int main()
{
    int n; 
    cin >> n; 
    cout << isPrime(n) << endl; 

    return 0;
}
bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i < sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}