#include <iostream>
using namespace std;

int main()
{

     // character arrays work differently comapred to integer arrays !

     // dont need a for loop to add content into array instead just take input from user

     /* suppose i created a character array name with the size of 100 and allocate only 4 memory blocks from the 100 and take input faraz as name character array, remember a single character takes 1 byte of memory

     size of character array will be: 100 + 4 = 104 bytes

     */

     // character array with size of 100
     char name[100];

     // filling the content in character array by taking input from user
     cin >> name; // faraz

     /* now the charcter container characters faraz taking only 4 bytes of space rest 96 block will contain
     garbage values */

     // printin the character array
     cout << name << endl; // faraz

     /*
          Question Question: 😅
          since the characters are stored as contigious memory locations how does cout know and our character array has a size of 100 and only 4 bytes are reserved so rest of 96 blocks are empty and contain garbage values! how does cout stop printing when the content inside character array is printed ?

          answer: there is "\0" (null charcater) also known as terminator when the content is being printed and it reaches the last character which is z in this case after this charcater there will be "\0" null character in the character array! 😄

          */

     // printing the character at 2nd index which is r in this case!
     cout << name[2]; // r


     // what if a add "\0" after first character ?

     // name[1]="\0";

     // this statement will print f only then which is at 0 index ,  after this index there is null character so it determine i need to stop here
     
      //f
     // cout<<name<<endl;

}