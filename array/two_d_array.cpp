#include <iostream>
using namespace std;

int main()
{

    int a[100][100];
    int rows, columns;
    cout << "Enter the no of rows and columns you want: " << endl;
    cin >> rows >> columns;
    // take input in 2d array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> a[i][j];
        }
    }
    // print the content of 2d array
    cout << endl;
    cout << "row wise print: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "column wise print: " << endl;
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << a[j][i]<<" ";
        }
        cout << endl;
    }

    return 0;
}