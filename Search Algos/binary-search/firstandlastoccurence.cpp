#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int start, int end, int mid, int key)
{
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int lastOccurence(int arr[], int n, int start, int end, int mid, int key)
{
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main()
{
    int arr[6] = {1, 2, 3, 3, 3, 5};
    int start = 0;
    int n = 6;
    int end = n - 1;
    int mid = (start + end) / 2;
    int key = 3;

    cout << firstOccurence(arr, n, start, end, mid, key) << endl;
    cout << lastOccurence(arr, n, start, end, mid, key) << endl;
}