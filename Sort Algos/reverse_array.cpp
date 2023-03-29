#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // reverse the vector array satring from 3rd index

    vector<int> a = {1, 2, 3, 4, 5};

    int start = 3;
    int end = a.size() - 1;

    // reverse logic
    while (start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }

    for (int i : a)
    {
        cout << i << " ";
    }

    return 0;
}