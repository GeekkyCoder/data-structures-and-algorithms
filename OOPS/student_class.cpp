#include <iostream>
using namespace std;
class Student
{
public:
    int roll_no;

private:
    int age;

public:
    void setAge(int a)
    {
        if (a < 0)
            return;
        age = a;
    }

    int getAge()
    {
        return age;
    }
};