#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    cout << endl;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;

    cout << "\nNormal:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "After reversing: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}