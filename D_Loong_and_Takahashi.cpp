#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Initialize the grid with values from 1 to N^2 - 1
    vector<vector<int>> grid(N, vector<int>(N, 0));
    int value = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            grid[i][j] = value++;
        }
    }

    // Place Takahashi at the center
    int center = N / 2;
    grid[center][center] = 'T';

    // Output the arrangement
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
