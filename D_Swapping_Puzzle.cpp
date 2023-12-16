#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

// Function to get transpose of a matrix
vector<vector<int>> getTranspose(const vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> transpose(cols, vector<int>(rows));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    return transpose;
}

// Function to check for row preservation
bool rowEquality(const vector<vector<int>> &s, const vector<vector<int>> &f)
{
    int rows = s.size();
    int cols = s[0].size();

    vector<set<int>> sets, setf;
    unordered_map<int, int> map;

    // Creating sets from the initial matrix
    for (int i = 0; i < rows; i++)
    {
        // Create set for corresponding row
        set<int> sett;
        // Add first element to the set
        sett.insert(s[i][0]);
        sets.push_back(sett);

        // Store the row number in map
        map[s[i][0]] = i;

        // Add remaining elements to the set
        for (int j = 1; j < cols; j++)
        {
            sett.insert(s[i][j]);
        }
    }

    // Create sets for the final matrix
    // and check with the initial matrix
    int rowIndex = -1;
    for (int i = 0; i < rows; i++)
    {
        rowIndex = -1;
        set<int> sett;

        for (int j = 0; j < cols; j++)
        {
            sett.insert(f[i][j]);
            if (map.find(f[i][j]) != map.end())
            {
                rowIndex = map[f[i][j]];
            }
        }

        setf.push_back(sett);
        if (setf[i] != sets[rowIndex])
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int rowsStart, colsStart, rowsFinal, colsFinal;

    // cout << "Enter the number of rows for the start matrix: ";
    cin >> rowsStart;
    // cout << "Enter the number of columns for the start matrix: ";
    cin >> colsStart;

    rowsFinal = rowsStart;
    colsFinal = colsStart;
    if (rowsStart != rowsFinal || colsStart != colsFinal)
    {
        cout << "Matrices have different sizes. Unable to compare." << endl;
        return 0;
    }

    vector<vector<int>> startMatrix(rowsStart, vector<int>(colsStart));
    vector<vector<int>> finalMatrix(rowsFinal, vector<int>(colsFinal));

    // cout << "Enter the elements of the start matrix:" << endl;
    for (int i = 0; i < rowsStart; i++)
    {
        for (int j = 0; j < colsStart; j++)
        {
            cin >> startMatrix[i][j];
        }
    }

    // cout << "Enter the elements of the final matrix:" << endl;
    for (int i = 0; i < rowsFinal; i++)
    {
        for (int j = 0; j < colsFinal; j++)
        {
            cin >> finalMatrix[i][j];
        }
    }

    vector<vector<int>> startTranspose = getTranspose(startMatrix);
    vector<vector<int>> finalTranspose = getTranspose(finalMatrix);

    if (rowEquality(startMatrix, finalMatrix) && rowEquality(startTranspose, finalTranspose))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
