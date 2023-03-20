#include <iostream>
using namespace std;

using namespace std;

int firstOccurence(int a[], int size, int k)
{
    int firstOcc = -1;
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (a[mid] == k)
        {
            firstOcc = mid;
            end = mid - 1;
        }
        else if (k > a[mid])
        {
            start = mid + 1;
        }
        else if (k < a[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return firstOcc;
}

int lastOccurence(int a[], int size, int k)
{
    int lastOcc = -1;
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (a[mid] == k)
        {
            lastOcc = mid;
            start = mid + 1;
        }
        else if (k > a[mid])
        {
            start = mid + 1;
        }
        else if (k < a[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return lastOcc;
}

int main()
{
    int a[] = {1, 2, 3, 3, 3, 3, 3, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    int k = 3;

    int firstOcc = firstOccurence(a, size, k);
    int lastOcc = lastOccurence(a, size, k);

    cout << firstOcc << endl;
    cout << lastOcc << endl;

    cout << "total no: of occurences of 3 is :" << (lastOcc - firstOcc) + 1 << endl;
    return 0;
}
