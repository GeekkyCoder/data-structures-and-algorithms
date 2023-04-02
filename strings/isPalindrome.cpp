#include <iostream>
using namespace std;

bool isPalindrome(char string[], int len)
{
    int start = 0;
    int end = len - 1;

    while (start <= end)
    {
        if (string[start] != string[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }

    return 1;
}

int main()
{
    char string[20];

    cin >> string;

    int len = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        len++;
    }

    cout << "1 if palindrome and 0 if not palindrome: " << isPalindrome(string, len) << endl;

    return 0;
}