#include <iostream>
using namespace std;

/* keywords:
substring -> A substring is a contigious sequence of characters in a string!
*/

string remove_all_occurences_of_substring(string str, string part)
{
    while (str.length() != 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }

    return str;
}

int main()
{

    string str = "daabcbaabcbc";
    string part = "abc";

    string res = remove_all_occurences_of_substring(str, part);

    cout << res << endl;

    return 0;
}