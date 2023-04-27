#include <iostream>
#include <vector>
using namespace std;

int binary_search_2d_matrix(vector<vector<int>> matrix, int cols, int target, int start, int end)
{

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = matrix[mid / cols][mid % cols];

        if (element == target)
        {
            return 1;
        }

        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return 0;
}

int main()
{

    vector<vector<int>> matrix = {{1, 3, 4}, {6, 8, 9}, {11, 13, 15}};

    int rows = matrix.size();
    int cols = matrix[0].size();

    int totalElements = rows * cols;

    int start = 0;
    int end = rows * cols - 1;

    int target = 15;

    cout << binary_search_2d_matrix(matrix, cols, target, start, end) << endl;

    return 0;
}