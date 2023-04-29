#include <iostream>
using namespace std;

// pass by value / pass by reference

// pass by value:
// functions takes paramters which can be pass by value (varaibles are pass by values), means if they are
// modified in function, this wont effect the original variable!

// pass by reference:
// functions takes paramters which can be pass by reference (arrays,pointers), means if they are modified in function, thi will effect the original array/pointers as well

// read above 🙂
void funcA(int *ptr)
{
    (*ptr)++;
}

int main()
{

    int num = 10;

    // * note: never ever declare a pointer but initliaze it with some 0 value, this will point to garbage value, it will point to the address of garbage value, later if you delete it cause problems (risky!!!)

    // bad practice
    // int *ptr;

    // good practice (null pointer) 👇
    // int *ptr = 0;

    int *ptr = &num;

    cout << "value or address at ptr  is: " << ptr << endl;
    cout << "value at address of ptr is: " << *ptr << endl;

    // depends upon the computer specs 32bit (4 bytes) /64bit (8bytes)
    cout << "size of ptr is: " << sizeof(ptr) << endl;

    // 4
    cout << "size of num is: " << sizeof(num) << endl;

    funcA(ptr);

    // 11
    cout << "after modifying the value in function is: " << num << endl;
    cout << "value or address at ptr  is: " << ptr << endl;

    // other ways to delare and initilize a pointer
    int num2 = 15;
    int *p = 0;
    p = &num2;

    // value at addresss stored in pointer
    cout << *p << endl;
    // address of num2
    cout << p << endl;

    // *copying one pointer into another
    int *q = p;

    // same addresss as p
    cout << q << "-" << p << endl;
    // same value as p
    cout << *q << "-" << *p << endl;

    return 0;
}