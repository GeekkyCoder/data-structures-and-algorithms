#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int n;
    cout << "Enter total number of elements in array: ";
    cin >> n;

    int array[n];

    cout << "Enter your numbers below: ";

    for (int i = 1; i < n; i++)
    {
        cin >> array[i];
    }

    int i = 0;

    int smallest = array[0];

    while (i < n)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }

        i++;
    }

    cout << "The smallest element is: " << smallest;

    return 0;
}