#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 1, 0, 0, 1, 0};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallest])
            {
                smallest = j;
            }
        }
        swap(a[i], a[smallest]);
    }

    // sorted array
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
}