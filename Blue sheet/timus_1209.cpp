#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

void pre_call() {
    int x = 1;
    while (v.size() <= 65535) {
        x += v.size();
        v.push_back(x);
    }
}

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fastIO();
    int tc; 
    cin >> tc; 
    pre_call(); 
    while (tc--) {
        int n; 
        cin >> n; 
        bool check = binary_search(v.begin(), v.end(), n);
        cout << check << " "; 
    }
    cout << endl; 
    return 0;
}