#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char str[100] = "abcd";

    int end = strlen(str);

    while (end >= 0)
    {
        int start = strlen(str);
        while (start >= end)
        {
            cout << str[start] << " ";
            start--;
        }
        cout << endl;

        end--;
    }
    return 0;
}