#include <iostream>
#include <array>
using namespace std;

int main()
{

    // normal array
    int arr[] = {1, 2, 3, 4};

    // array in stl decleration
    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    // printing array content
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    // other methods that we can use on array

    // array.at(index) -> returns the element at index provided!
    cout << a.at(2) << endl;

    // array.empty() -> returns true or false , true(1) if array is empty and false(0) if array is not empty
    cout << a.empty() << endl;

    // array.front()  -> returns first element of array
    // array.back()  -> returns last element of array
    cout << a.front() << endl;
    cout << a.back() << endl;

    return 0;
}