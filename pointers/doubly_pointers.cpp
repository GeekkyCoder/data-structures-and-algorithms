#include <iostream>

using namespace std;

int main()
{
    int n = 10;

    int *ptr = &n;

    int **ptr2 = &ptr;

    cout << ptr << endl;
    // ptr2 holds the address of ptr, and we are printing the value at ptr which is the address of n!
    cout << *ptr2 << endl;

    // printing the value of n (3 different ways)
    // 10
    cout << n << endl;
    // 10
    cout << *ptr << endl;
    // 10
    cout << **ptr2 << endl;

    // priting the value of ptr
    cout << *ptr2 << endl;

    return 0;
}
