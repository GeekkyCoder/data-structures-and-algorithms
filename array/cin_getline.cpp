#include <iostream>
using namespace std;

int main()
{
    // here the maximum size of characrter array is 4
    // char name[4];
    // what if you entered the 4 characters? basically it will take this input no doubt, but we know that the last character has to be '\0' which determine whether the string/characters is ended or  not!

    // faraz
    // cin >> name; 

    //  representation:
    // ['f','a','r','a','z']

    // since the length of string is 4 , but the 4th character should be null character right? 🤔
    /*
       like this:
     ['f','a','r','\0']

     */

    // may and may not stop the program!
    // faraz
    // cout << name<<endl; 
     
    // cin --> cin will stop taking input if it encounters spaces,tabs and new lines 

    // ******** cin.getline ******** //
    char randtext[100];
    cout<<"Enter some text include spaces and tabs and new lines: "; 

    // first paramter: charcter array name
    // second paramter: length of the string you want
    // third paramter optional: delimeter (breakpoint) here soon it encounters r it it will terminate the rest of the characters
    cin.getline(randtext,100,'r');
    cout<<randtext;
    return 0;
    
}