#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6};

    // 2 ways
    // int *ptr = arr;
    // int *ptr = &arr[0];

    int *ptr = arr;
    cout << "the value of ptr before incrementing: " << *ptr << endl;
    ptr = ptr + 1;
    cout << "the value of ptr after incrementing: " << *ptr << endl;

    return 0;
}