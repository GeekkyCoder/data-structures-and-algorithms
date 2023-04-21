#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // largest row sum
    int largestSum = 0;
    int rowsIndex;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }

        if (sum > largestSum)
        {
            largestSum = sum;
            rowsIndex = i;
        }
    }

    cout << endl;
    cout << "largest row index is " << rowsIndex << " " << endl;

    return 0;
}