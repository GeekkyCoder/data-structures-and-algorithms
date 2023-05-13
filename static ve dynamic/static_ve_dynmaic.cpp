#include <iostream>
using namespace std;

int main()
{
    // terms:
    // static memory allocation and dynamic memory allocation

    // stack and dynamic (stack and heap) reference:  https://bit.ly/3ewm1TF

    // static memory allocation:
    // When the amount of memory to be allocated is known beforehand, i.e., it is known as Static Memory Allocation at the time of compilation. Once the memory is allocated statically, it cannot be deallocated during the program run. So it leads to wastage of storage space. We generally pass constants while declaring arrays

    // dynamic memory allocation
    // When the amount of memory to be allocated is not known beforehand, i.e., it is known as dynamic Memory Allocation at the time of run time. Once the memory is allocated dynamically, it can be deallocated during the program run. So it does not leads to wastage of storage space.

    // static
    // static memory allocation: it is done via stack, stack is created compile time
    int n = 10;
    cout << n << endl;

    // dnynamic
    // dynamic memory allocation:it is done via heap, heap is created runtime
    int *ptr = new int;
    cout << *ptr << endl;

    // arrays static and arrays dynamic
    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << *(arr) << endl;

    // dynamic memory allocation array
    int size;
    cin >> size;

    int *arr_ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr_ptr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr_ptr[i] << " ";
    }

    // cout << *(arr_ptr) << endl;

    return 0;
}