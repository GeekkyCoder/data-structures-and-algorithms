#include <iostream>
using namespace std;

int main()
{
    // initilizing and printing string
    // string s = "hello";
    // cout << s << endl;

    // declaring and taking input string from user
    /*
                       ***NOTE***:
     cin function will stop taking input after it encounters  a space or a tab, if any space or tab
    is added it will stop there and take only those characters which comes before a space or tab
    */
    // string s2;
    // cin >> s2;
    // cout << s2 << endl;

    // declaring and taking input from user with getline function
    // getline: takes cin and string name as arguments, and it also allows the characters after encountering tabs and spaces unlike cin.getline
    // string s3;
    // getline(cin, s3);
    // cout << s3 << endl;

    // initialzing and updating string content like an array
    // string s4;
    // getline(cin, s4);
    // cout << s4 << endl;
    // cout << "first character is: " << s4[0] << endl;
    // // updating a character at certain index
    // s4[1] = 'f';
    // cout << s4 << endl;

    // concatinating 2 or multiple strings
    // string s5 = "hello "  +  s4 + " how are you";
    // cout<<s5;

    // length of string
    // string s6 = "hello ahmed";
    // cout<<s6.length()<<endl;
    // // or
    // cout<<s5.size()<<endl;

    // Part of the string
    string s7 = "hello";
    // // starting from index 2 start extracting the string
    // cout << s7.substr(2) << endl;
    // // starting from index 0 start extracting the string
    // cout << s7.substr(0) << endl;
    // // starting from index 3 start extracting the string
    // cout << s7.substr(3) << endl;
    // // starting from index 2 extracting the 2 characters
    // cout << s7.substr(2, 2);
    // // starting from index 0 extracting all the characters
    // cout << s7.substr(0, s7.size());


    // find the index of a character in string 
    // string s8 = "heleo";
    // cout<<s8.find("e")<<endl;

     
    //  convert integer to string 
    //  int number = 123;
    //  string s9 = to_string(number);
    //  cout<<s9<<endl;

    
    // string to integer
    // string s10 = "123";
    // s10.push_back('4');
    // int number2 = atoi(s10.c_str());
    // cout<<number2<<endl;

}