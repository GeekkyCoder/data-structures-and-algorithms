#include <iostream>
using namespace std;

void print_two_d_array(int a[][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{

    // dont need to expilictly define rows just just defines the columns you want! its mandatory
    int a[][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}};

    int b[][10] = {
        {0}, {10}};

    //   Note:
    //   when passing the 2d array to a function, in the function defination 2d array paramter should be defined with columns with exactly same as in function call!

    // print_two_d_array(a, 2, 5);
    print_two_d_array(b, 2, 10);

    return 0;
}