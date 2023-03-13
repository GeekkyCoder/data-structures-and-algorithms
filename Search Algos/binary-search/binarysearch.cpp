#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int item,int mid)
{
    for (int i = 0; i < n; i++)
    {
        if (a[mid] == item)
        {
            return mid;
        }

        if (item > a[mid])
        {
            mid = mid + 1;
        }

        if (item < a[mid])
        {
            mid = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int a[] = {2, 3, 5, 7, 8, 10, 12, 33, 43};
    int n = sizeof(a) / sizeof(a[0]);
    int mid = n /2 ;
    int itemToFind = 33;
    cout<<binarySearch(a,n,itemToFind,mid)<<endl;

    return 0;
}