#include <iostream>
using namespace std;
#include "student_class.cpp";

int main()
{
    // creating a dynamic class instance of Student!

    // whenever a class is created constructor function will run!

    // Constructors:
    // * a constructor is a special member function that is automatically called when an object of a class is created. The constructor is responsible for initializing the object's data members to a valid initial state, which can include allocating memory or setting default values for member variables.

    // 1.default constructor
    // * has no return value, dont take any paramter, same name as class Name

    // 2.paramterized constrcutor
    // constructor taking paramters

    // default constructor: if we create a class without paramters,default constructor will run !

    // here Student is the constructor with no paramter, it means we are calling the constructor with no paramter!

    //* default consctructor will run

    //* The default constructor initializes all the data members of the class to their default values.

    //* repersentation: s1.Student()
    Student *s1 = new Student;

    s1->setAge(21);
    s1->setRollNo(34);

    s1->getAge();
    s1->getRollNo();

    /*
    creating a class s2 passing in th 2 paramters, so the paramterized constructor will run for S2 object!
    */

    // paramterized constructor will run
    //* repersentation: s2.Student(21,34)
    Student *s2 = new Student(21);
}