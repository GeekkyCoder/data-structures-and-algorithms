#include <iostream>

using namespace std;

int main()
{

    // 97 + 2 = 99 = c
    char ch = 'a' + 2;
    cout << ch << endl;

    // 97 + 2 = 99
    int num = 'a' + 2;
    cout << num << endl;

    // 97 - 2 = 95
    int diffNum = 'a' - 2;
    cout << diffNum << endl;

    // 97 - 2 = 95 = _
    char ch2 = 'a' - 2;
    cout << ch2 << endl;

    // 97 + 10 = 107 = k
    char ch3 = 'a' + 10;
    cout << ch3 << endl;

    // 97 - 10 = 87
    int diffNum2 = 'a' - 10;
    cout << diffNum2 << endl;



    // Extra stuff: use cases of ascii games

    // occurences of character
    // string s = "abcdefghijklmnopqrstuvwxyz";
    string s = "my name is khan";
    int occs[26] = {0};
    int number = 0;
    for (int i = 0; i < 26; i++)
    {
        char ch = s[i];
        number = ch - 'a';
        occs[number]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << occs[i] << " ";
    }

    return 0;
}