#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    int age;

public:

     Student()
    {
        cout << "default constructor called"<<endl;
    }

    // paramterized constrctor with 2 paramters
    Student(int age)
    {
        cout << "paramterized constructor called"<<endl;
    }

    void getAge()
    {
        cout << age << endl;
    }

    void getRollNo()
    {
        cout << rollNo << endl;
    }

    int setAge(int a)
    {
        age = a;
    }

    int setRollNo(int r)
    {
        rollNo = r;
    }
};