#include <iostream>
using namespace std;

int length(char string[])
{
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void reverse(char string[])
{
    int start = 0;
    int end = length(string) - 1;

    while (start < end)
    {
        swap(string[start], string[end]);
        start++;
        end--;
    }
    cout << endl;
    cout << "reversed string: " << string << endl;
}

int main()
{
    char string[100];
    cin.getline(string, 100);
    reverse(string);
    return 0;
}