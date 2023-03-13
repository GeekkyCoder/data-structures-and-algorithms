#include<iostream>
#include"this.cpp";
using namespace std;

int main(){
    // Student *s1 = new Student(21,34);
    Student *s2 = new Student(23,45);

    // s1->displayAgeAndRoll();
    s2->displayAgeAndRoll();

    // copy constructor 

    // passing s2 object to s3 object, means whatever inside 2 is defined copy it into s3 object as well ☺
    Student *s3 = new Student(*s2);

    s3->displayAgeAndRoll();
}