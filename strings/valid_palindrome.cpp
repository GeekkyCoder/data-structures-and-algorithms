#include <iostream>
using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}

string checkIfPalindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start <= end)
    {
        if (str[start] != str[end])
        {
            return "false";
        }
        else
        {
            start++;
            end--;
        }
    }

    return "true";
}

string isPalindrome(string s)
{
    // remove unnecessary characters
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isValid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    // convert all character to lowercase
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }

    return checkIfPalindrome(temp);
}

int main()
{
    string str = "121";
    string ans = isPalindrome(str);

    cout << ans << endl;
}