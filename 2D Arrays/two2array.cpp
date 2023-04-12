#include <iostream>
using namespace std;

int main()
{

    // Declaration and initilization of 2d array!

    int arr[2][3];

    // int arr[2][3] = {1, 2, 3, 4, 5, 6};

    // int arr[2][3] = {{2,3,1},{5,4,6}};

    

    // taking input
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // row wise printing
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }

        cout << endl;
    }

    // column wise printing
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 2; row++)
        {
            cout << arr[col][row] << " ";
        }

        cout << endl;
    }

    return 0;
}
