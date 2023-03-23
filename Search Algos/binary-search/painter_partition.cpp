#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int mid, int noOfPainters)
{
    int painterCount = 1;
    int paintSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (paintSum + arr[i] <= mid)
        {
            paintSum += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > noOfPainters || arr[i] > mid)
            {
                return false;
            }
            else
            {
                paintSum = 0;
                paintSum += arr[i];
            }
        }
    }
    return true;
}

int main()
{
    int arr[] = {5, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int noOfPainters = 2;
    int start = 0;
    int sum = 0;
    int ans = -1;
    // end will be the sum of all array elements
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    int end = sum;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, size, mid, noOfPainters))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            mid = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}