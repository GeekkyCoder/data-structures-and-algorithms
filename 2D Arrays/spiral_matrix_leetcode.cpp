#include <iostream>
#include <vector>
using namespace std;

int main()
{

    //    sample input : 1
    // 4 5 6
    // 1 2 3
    // 8 9 10

    // output: ✔
    // 4 5 6 3 10 9 8 1 2

    // sample input 2:
    //     1 2 3
    //     4 5 6
    //     7 8 9

    //     output: ✔
    //     1 2 3 6 9 8 7 4 5

    vector<vector<int>>
        matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int row = matrix.size();
    int col = matrix[0].size();

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    int count = 0;

    int total = row * col;

    vector<int> ans;

    while (startingRow <= endingRow && startingCol <= endingCol)
    {
        // print the first row
        for (int index = startingRow; count <= total, index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // print the last column
        for (int index = startingRow; count <= total, index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // print the last row
        for (int index = endingCol; count <= total, index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // print the first col
        for (int index = endingRow; count <= total, index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}