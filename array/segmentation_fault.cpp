#include<iostream>
using namespace std;


int main(){
    int arr[100];

    // Segmentation fault ? 
    // trying to access the memory which is not ours, array values does not exist in memory 
    // can not make an array greater than 10^5!


    // Segmentation fault examples 👇:

    // trying to access memory which is not ours
    cout<<arr[2000];

    // can not make an array size greater than 10^5 so its a segmentation fault!
    int arr2[100000];

    return 0;
}