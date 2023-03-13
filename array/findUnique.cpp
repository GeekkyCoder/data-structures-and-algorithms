#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 1, 2, 2, 4, 4, 6, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int ans = 0;

    // using xor operator 
    // 0 1 = 1 
    // 0 0 = 0 
    // 1 0 = 1
    // 1 1 = 0
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }

    cout << ans << endl;
}