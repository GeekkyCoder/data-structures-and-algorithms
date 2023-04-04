#include <iostream>
using namespace std;

string modifyString(string str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }

    return temp;
}

int main()
{
    string str = "my name is khan";

    // string add = "@40";

    string newStr = modifyString(str);

    //  my@40name@40is@40khan
    cout << newStr << endl;
}