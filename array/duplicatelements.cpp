#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 5, 4, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);

    int duplicatElement = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                duplicatElement = a[i];
            }
        }
    }

    cout << duplicatElement << endl;
}