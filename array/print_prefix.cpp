#include <iostream>
using namespace std;
#include <cstring>

// input: abcd
// output: a
//         ab
//         abc
//         abcd

int main()
{
    char str[100] = "abcd";

    int end = 0;

    while (str[end] != '\0')
    {
        int start = 0;
        while (start <= end)
        {
            cout << str[start];
            start++;
        }
        cout << endl;
        end++;
    }
    return 0;
}