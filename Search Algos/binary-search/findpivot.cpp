#include <iostream>
using namespace std;

int findPivot(int a[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (a[mid] >= a[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    int a[] = {7, 9, 1, 2, 3};
    int size = sizeof(a) / sizeof(a[0]);

    int pivotElement = findPivot(a, size);
    cout << "pivot is at index: " << pivotElement << endl;
}