#include <iostream>
#include <vector>

using namespace std;

int H, W;

// Function to check if a cell is valid and doesn't contain a magnet
bool isValid(int x, int y, vector<vector<char>>& grid) {
    return x >= 0 && x < H && y >= 0 && y < W && grid[x][y] == '.';
}

// Function to calculate the degree of freedom for a cell
int calculateDegree(int x, int y, vector<vector<char>>& grid) {
    int degree = 0;
    // Check adjacent cells
    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};
    for (int i = 0; i < 4; ++i) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (isValid(newX, newY, grid)) {
            degree++;
        }
    }
    return degree;
}

int main() {
    cin >> H >> W;
    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> grid[i][j];
        }
    }

    int maxDegree = 0;
    // Iterate over each cell to calculate degree of freedom
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == '.') {
                int degree = calculateDegree(i, j, grid);
                maxDegree = max(maxDegree, degree);
            }
        }
    }

    cout << maxDegree << endl;

    return 0;
}
