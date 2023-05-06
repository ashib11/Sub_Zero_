#include <iostream>
using namespace std;

const int MAX_N = 1000; // Maximum size of the 2D array

int max_sum_path(int matrix[][MAX_N], int i, int j, int N, int M)
{
    // Base case: if we are at the bottom-right element, return its value
    if (i == N - 1 && j == M - 1)
    {
        return matrix[i][j];
    }

    // If we are at the bottom row, we can only move right
    if (i == N - 1)
    {
        return matrix[i][j] + max_sum_path(matrix, i, j + 1, N, M);
    }

    // If we are at the rightmost column, we can only move down
    if (j == M - 1)
    {
        return matrix[i][j] + max_sum_path(matrix, i + 1, j, N, M);
    }

    // Otherwise, we can move either right or down, and we choose the maximum path
    return matrix[i][j] + max(max_sum_path(matrix, i + 1, j, N, M), max_sum_path(matrix, i, j + 1, N, M));
}

int main()
{
    int N = 3, M = 3;
    int matrix[MAX_N][MAX_N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int max_sum = max_sum_path(matrix, 0, 0, N, M);
    cout << max_sum << endl; // Output: 29
    return 0;
}
