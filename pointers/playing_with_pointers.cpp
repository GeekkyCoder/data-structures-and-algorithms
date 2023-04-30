#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    //* name of arr represents the first block address among memory blocks

    //*   & -> address of operator
    //*   * -> value at operator or derefernce operator

    // 0x61fefc
    cout << "address of first memory block is " << arr << endl;
    //  0x61fefc
    cout << "address of first memory block is " << &arr[0] << endl;

    cout << endl;

    // experiments with accessing array elements via value at operator
    cout << "the element at first memory block: " << *arr << endl;
    cout << "the element at second memory block: " << *(arr + 1) << endl;
    cout << "the element at third memory block: " << *(arr + 2) << endl;
    cout << "the element at fourth memory block: " << *(arr + 3) << endl;
    cout << "the element at fifth memory block: " << *(arr + 4) << endl;

    cout << endl;

    // experiments with array elements addresses
    cout << "the address of first memory block is: " << arr << endl;
    cout << "the address of second memory block is: " << arr + 1 << endl;
    cout << "the address of third memory block is: " << arr + 2 << endl;
    cout << "the address of fourth memory block is: " << arr + 3 << endl;
    cout << "the address of fifth memory block is :" << arr + 4 << endl;

    cout<<endl;

    // printing array elements
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }

    return 0;
}