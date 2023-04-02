#include <iostream>

using namespace std;

char toLowerCase(char ch)
{
    // if the character is between lower case (a-z) return the character as it is!
    if (ch >= 'a' && ch <= 'z')
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
        return ch - 'A' + 'a';
    }
}

int main()
{
    char ch = 'a';

    cout << toLowerCase('b') << endl;
    cout << toLowerCase('B') << endl;

    return 0;
}