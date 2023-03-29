#include <iostream>
#include <deque>
using namespace std;

// * deque ?  -> a data structure in which we can perform insertion and deletion from starting and ending!

/*
A deque is a dynamic array whose size can be efficiently
  changed at both ends of the array. Like a vector, a deque provides
  the functions push_back and pop_back, but it also includes the
  functions push_front and pop_front.
*/

int main()
{
    // declaration of deque
    deque<int> d;

    // iterator for deque , we can also use for loop as well

    // for(int i=0; i<d.size();i++){
    //     cout<<d[i]<<" ";
    // }

    // for(int i:d){
    //     cout<< i << " ";
    // }

    // cout<<endl;

    // methods/operations on deque

    // * deque.size() -> returns the size of deque array!
    // cout << d.size() << endl;

    // * deque.push_front(element) -> pushes the element at the beginning of deque array!
    d.push_front(10);
    d.push_front(25);

    // * deque.push_front(element) -> pushed the element at the ending of deque array!
    d.push_back(17);
    d.push_back(20);

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    cout << endl;

    // * deque.pop_back() -> removes the element from ending
    d.pop_back();

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    // * deque.pop_front() -> removes the element from beginning
    d.pop_front();

    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    // * deque.at(index) -> reeturn the element at specified index
    cout << d.at(0) << endl;

    // * deque.empty() -> returns 0(false) or 1(true)
    cout << d.empty() << endl;

    // * deque.erase() -> removes some element from given range!
    // * first argument -> begin
    // * second argument -> end
    d.push_front(44);
    d.push_back(55);

    cout << "before erasing elements are: ";
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    d.erase(d.begin(), d.begin() + 1);

    cout << "after erasing elements are: ";
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    // * deque.front() -> returns the first element of deque array
    cout << d.front() << endl;

    // * deque.back() -> returns the last element of deque array
    cout << d.back() << endl;

    return 0;
}