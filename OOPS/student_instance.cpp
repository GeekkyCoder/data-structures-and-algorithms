#include <iostream>
#include "student_class.cpp"
using namespace std;

// * Note: need to access the privately declared variable just wrap it in publicly declread function in the class


// *why use private variables ? 
// because we user has to set a value which is negative and we are expecting a positive value from user, if its decalred publicly then the user has the ability to set it as negative value, but if its decalred as private then we can write some logic to prevent user from entering negavtive values 

int main()
{
    Student *s1 = new Student;

    // address of student 1 in memory
    cout << "address of s1: " << s1 << endl;

    // garbage value becuause we have assigned a value to integer age
    //    cout<<s1->age<<endl;
   
    // setting the age using setter function
    s1->setAge(-20);

    // 20
    cout << s1->getAge() << endl;
}