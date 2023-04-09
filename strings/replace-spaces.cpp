#include <iostream>
using namespace std;

int main()
{
    string s = "my name is khan";

    // replace white spaces with 007
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('0');
            temp.push_back('0');
            temp.push_back('7');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }

    // my007name007is007khan
    cout << temp << endl;
}