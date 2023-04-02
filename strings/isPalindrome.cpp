#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch <= 'a' && ch >= 'z')
    {
        return ch;
    }
    else
    {
        // return the uppercase character as lowercase letter

        // ????

        // "B" - "A"
        //  65 - 64 = 1
        // 1 + 64 = 65 -> b
        return ch + 'A' + 'a';
    }
}

bool isPalindrome(char string[], int len)
{
    int start = 0;
    int end = len - 1;

    while (start <= end)
    {

        if (!isalnum(toLowerCase(string[start])))
        { // skip non-letter and non-digit characters
            start++;
            continue;
        }
        if (!isalnum(toLowerCase(string[end])))
        { // skip non-letter and non-digit characters
            end--;
            continue;
        }

        if (toLowerCase(string[start]) != toLowerCase(string[end]))
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