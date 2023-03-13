#include <iostream>
using namespace std;

void swapTwoNumbers(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping the values of a and b :" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

int main()
{
    int a = 10;
    int b = 20;
    cout<<"Before swapping the value of a and b: "<<endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    swapTwoNumbers(a, b);

    return 0;
}
