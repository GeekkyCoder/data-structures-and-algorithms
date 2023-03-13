#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[] = {10, 20, 30, 10, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int itemToFind = 30;
    cout << linearSearch(a, n, itemToFind) << endl;
}