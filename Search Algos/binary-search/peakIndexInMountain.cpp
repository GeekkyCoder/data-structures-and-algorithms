#include <iostream>
using namespace std;

int peakIndexInMountain(int a[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (a[mid] < a[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }

    return start;
}

int main()
{
     // mountian array 😕? 
     // elements are in mountain order (ascending/desceding or desceding/ascending)
    int a[] = {0, 1, 2, 3, 2, 1, 0};
    int size = sizeof(a) / sizeof(a[0]);
    int peakElement = peakIndexInMountain(a, size);
    cout << "peak element is:" << peakElement << endl;
}