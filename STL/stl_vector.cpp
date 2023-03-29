#include <iostream>
#include <vector>
using namespace std;

//  * vectors are used to store elements of similar data types. However, unlike arrays, the size of a vector can grow dynamically.

//  * That is, we can change the size of the vector during the execution of a program as per our requirements.

//  * Vectors are part of the C++ Standard Template Library. To use vectors, we need to include the vector header file in our program

int main()
{
    // declaration of a vector
    vector<int> a;

    // initilizing a vector
    vector<int> b = {1, 2, 3, 4, 5};

    // *  iterator for vector 👇

    //   for (int i : a)
    // {
    //     cout << i << " ";
    // }

    /*
    this is also a valid vector initilization, we use this when we know the size of vector, first argument is size of vector
    and second argument is value , so the vector will have 5 elements which will be 12
    */

    vector<int> c(5, 12);

    cout << "print the content of c :";
    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    // *  methods/operations that we can use on vector

    // * vector.capacity() -> returns the memory space of vector
    cout << a.capacity() << endl;

    // *  vector.push_back() -> to push an element into vector
    a.push_back(5);

    // * now the capactity of vector is 1
    cout << a.capacity() << endl;

    a.push_back(7);

    // *  now the capactity of vector is 2
    cout << a.capacity() << endl;

    a.push_back(10);

    // *  why 4 ? why not 3 ?: -> because each time a new elements is pushed into vector, the size of vector gets doubled
    // * now the capactity of vector is 4
    cout << a.capacity() << endl;

    // *  vector.size() returns the size of vector, just like array size method
    // 3
    cout << a.size() << endl;

    // *  vector.at(index) -> returns the elment at the provided index
    // 7
    cout << a.at(1) << endl;

    // * vector.front() -> returns the first element of vector
    // 5
    cout << a.front() << endl;

    // * vector.back() -> returns the last element of vector
    // 10
    cout << a.back() << endl;

    // * vector.pop_back() -> removes the last element from vector

    cout << "before poping out last element: ";
    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    a.pop_back();

    cout << "after poping out last element: ";
    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    // * vector.clear() -> removes all elements from vector, but the capacity of vector in memory will be reserved!
    a.clear();

    // 4
    cout << a.capacity() << endl;
    // 0
    cout << a.size() << endl;

    // * copies all the contents from one vector to another
    vector<int> f(5, 1);

    vector<int> last(f);

    for (int i : last)
    {
        cout << i << " ";
    }

    return 0;
}