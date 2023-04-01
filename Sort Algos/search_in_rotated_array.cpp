#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int> arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
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

int binarySearch(vector<int> arr, int start, int end, int k)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {7, 9, 1, 2, 3};
    int k = 2;

    int pivot = getPivot(arr, arr.size());

    if (k >= arr[pivot] && k <= arr[arr.size() - 1])
    {
        cout << binarySearch(arr, pivot, arr.size() - 1, k) << endl;
    }
    else
    {
        cout << binarySearch(arr, 0, pivot - 1, k) << endl;
    }
}
