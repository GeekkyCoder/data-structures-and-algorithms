#include <iostream>
using namespace std;

int main()
{

    int temp[10];

    // 10 * 4 = 40
    cout << "the size of temp is: " << sizeof(temp) << endl;
    // 8 or 4 bytes depends on computer architecture
    cout << "the size of first memory block is: " << sizeof(&temp) << endl;

    cout << "the size of value at base address is: " << sizeof(*temp) << endl;

    cout << endl;

    int *p = &temp[0];

    // 8 or 4
    cout << "the size of pointer p is: " << sizeof(p) << endl;

    cout << "the size of value at pointer p is :" << sizeof(*p) << endl;

    cout << "the size of address of ptr is: " << sizeof(&p) << endl;

    return 0;
}