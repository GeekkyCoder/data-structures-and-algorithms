#include <iostream>
using namespace std;
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> ans;

    // total rows
    int rows = matrix.size();
    int cols = matrix[0].size();

    int count = 0;

    // total elements we have
    int total = rows * cols;

    // indexes
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rows - 1;
    int endingCol = cols - 1;

    while (count < total)
    {

        // print starting row
        for (int index = startingRow; count < total, index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }

        startingRow++;

        // printing ending column
        for (int index = startingRow; count < total, index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }

        endingCol--;

        // print ending row
        for (int index = endingCol; count < total, index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }

        endingRow--;

        // print starting column below
        for (int index = endingRow; count < total, index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }

        startingCol++;
    }

    for (int i : ans)
        cout << i << " ";

    return 0;
}