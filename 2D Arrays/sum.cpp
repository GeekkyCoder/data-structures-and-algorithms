#include <iostream>
using namespace std;

void printRowSum(int arr[][5], int m, int n)
{
    for (int row = 0; row < m; row++)
    {
        int sum = 0;
        for (int col = 0; col < n; col++)
        {
            sum += arr[row][col];
        }

        cout << sum << endl;
    }
}

void printColSum(int arr[][5], int m, int n)
{
    for (int col = 0; col < n; col++)
    {
        int sum = 0;
        for (int row = 0; row < m; row++)
        {
            sum += arr[row][col];
        }

        cout << sum << endl;
    }
}

int main()
{

    int arr[4][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int row = 4;
    int col = 5;

    printRowSum(arr, row, col);

    cout << endl;

    printColSum(arr, row, col);

    return 0;
}