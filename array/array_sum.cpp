#include<iostream>
using namespace std;


int main(){
int array[] ={22,45,66,77,100,200};
int sum = 0;
int size_of_array = 6;
int counter = 0;
while(counter<size_of_array){
  sum+=array[counter];
  counter++;
}
cout<<"sum is: "<<sum<<endl;
return 0;
}
