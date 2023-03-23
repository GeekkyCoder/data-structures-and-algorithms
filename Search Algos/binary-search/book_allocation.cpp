#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int mid, int noOfStudents)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > noOfStudents || arr[i] > mid)
            {
                return false;
            }
            else
            {
                pageSum = 0;
                pageSum += arr[i];
            }
        }
    }
    return true;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int noOfStudents = 2;
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
        if (isPossible(arr, size, mid, noOfStudents))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

      cout<<ans<<endl;
}