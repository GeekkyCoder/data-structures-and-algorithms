#include <iostream>
using namespace std;

void sortArray(int stalls[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < size; j++)
        {
            if (stalls[j] < stalls[smallest])
            {
                smallest = j;
            }
        }
        swap(stalls[i], stalls[smallest]);
    }
}

bool isPossible(int stalls[], int noOfCows, int mid, int size)
{
    // sort the array
    sortArray(stalls, size);

    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < size; i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == noOfCows)
            {
                return true;
            }

            lastPos = stalls[i];
        }
    }

    return false;
}

int main()
{
    int stalls[] = {4, 2, 1, 3, 6};
    int size = sizeof(stalls) / sizeof(stalls[0]);
    int noOfCows = 2;
    int maxi = -1;

    // finding the maximum value in array
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int start = 0;
    int end = maxi;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(stalls, noOfCows, mid, size))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    cout << "the largest distance between 2 cows is: " << ans << endl;
}