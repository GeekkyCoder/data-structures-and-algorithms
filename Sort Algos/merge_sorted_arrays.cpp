#include <iostream>
using namespace std;

void merge_sorted_array(int arr1[], int n, int arr2[], int m, int arr3[])
{
    // merge sorted array logic
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    // for the remaining elements either in arr1 or arr2
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int arr3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    merge_sorted_array(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);

    return 0;
}