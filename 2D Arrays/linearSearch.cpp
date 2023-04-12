#include <iostream>
using namespace std;

bool isPresent(int arr[][5], int target, int m, int n)
{
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{

    int arr[4][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int row = 4;
    int col = 5;
    int target = 2;

    if (isPresent(arr, target, row, col))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}