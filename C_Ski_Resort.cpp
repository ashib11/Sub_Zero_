#include <iostream>
#include <vector>

bool is_connected(std::vector<std::vector<char>>& grid, int row, int col, char value) {
    int numRows = grid.size();
    int numCols = grid[0].size();

    // Check if the current cell is within the bounds of the grid
    if (row < 0 || row >= numRows || col < 0 || col >= numCols) {
        return true;
    }

    // Check if the current cell has the same value
    if (grid[row][col] == value) {
        // Mark the cell as visited to avoid revisiting it
        grid[row][col] = 'X';

        // Check in all 8 directions (up, down, left, right, and diagonals)
        bool connected =
            is_connected(grid, row - 1, col, value) &&
            is_connected(grid, row + 1, col, value) &&
            is_connected(grid, row, col - 1, value) &&
            is_connected(grid, row, col + 1, value) &&
            is_connected(grid, row - 1, col - 1, value) &&
            is_connected(grid, row - 1, col + 1, value) &&
            is_connected(grid, row + 1, col - 1, value) &&
            is_connected(grid, row + 1, col + 1, value);

        return connected;
    }

    return true;
}

int count_connected_regions(std::vector<std::vector<char>>& grid, char value) {
    int count = 0;
    int numRows = grid.size();
    int numCols = grid[0].size();

    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            if (grid[row][col] == value) {
                if (is_connected(grid, row, col, value)) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int numRows, numCols;
    std::cout << "Enter the number of rows: ";
    std::cin >> numRows;
    std::cout << "Enter the number of columns: ";
    std::cin >> numCols;

    std::vector<std::vector<char>> grid(numRows, std::vector<char>(numCols));

    std::cout << "Enter the grid (use '.' for empty cells and '#' for connected cells):" << std::endl;
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            std::cin >> grid[row][col];
        }
    }

    char value = '#';

    int regions = count_connected_regions(grid, value);
    std::cout << "Number of connected regions with '" << value << "': " << regions << std::endl;

    return 0;
}
