#include<iostream>
using namespace std;


//* why class ? 
// * think of 30 students and each stduent having roll no, name, address , would ypu create 30 students object? 30  times? the answer is no!



// *instead you want to create a object that has the properties of 30 students as a blueprint and you just create 30 instance of it ? sounds reasonable huh ? 



//* class ? 
// * it is a blueprint for creating multiple objects that share the same properties! 
// * all the multiple instances of class will have same properties!



// *syntax: 
// class Student {
// //   properties
// };


// *access modifiers
//* by default the properties inside class are private, meaning you can not access them outside of its context, so we need to explicity set them as public so we can use them outside of its contexts

//* three access modifiers:
//* public,
//* private,
//* protected



class Student {
   public:
   string name;
   int age;
   int roll_no;
};


int main() {
 // creating the multiple instances of class Student statically
 Student s1,s2,s3;
 s1.age = 21;
 s2.age = 22;
 s3.age = 23;

 cout<<s1.age<<endl;
 cout<<s2.age<<endl;
 cout<<s3.age<<endl;


 //creating the multiple instances of class Student dynamically
 Student *s4 = new Student ;
 Student * s5 = new Student;

 s4->age = 25; 
 s5 ->age = 26;
 cout<<s4->age<<endl;
 cout<<s5->age<<endl;

 return 0;
}

