#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "printing array in reverse order: " << endl;
    int i = n - 1;
    while (i >= 0)
    {
        cout << arr[i] << " ";
        i--;
    }
}