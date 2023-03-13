#include<iostream>
using namespace std;

class Student {
  public: 
  int age; 
  int rollNo;

   // constructor 
  Student (int age, int rollNo) {
   cout<<"paramterized contructor called"<<endl;
   this->age = age; 
   this->rollNo = rollNo;
  }
  
  void displayAgeAndRoll(){
    cout<<"age is"<<" "<<age<<" "<<rollNo<<endl;
  }

};