#include<iostream>
using namespace std;


void selectionSort(int a[],int n){
 for(int i=0; i<=n-2;i++){
    int smallest = i;
    for(int j= i+1;j<=n-1;j++){
        if(a[j] < a[smallest]){
            smallest = j;
        }
    }

   swap(a[i],a[smallest]);
    
 }

}

int main(){
int noOfElements;
cout<<"enter no of elements you want in array"<<endl;

cin>>noOfElements;

int array[noOfElements];

for(int i=0 ; i<noOfElements;i++){
    cin>>array[i];
}

cout<<"before sorting the elements are: "<<endl;

for(int i=0 ; i<noOfElements;i++){
    cout<<array[i]<<"  ";
}

selectionSort(array,noOfElements);

cout<<"after sorting the elements are: "<<endl;

for(int i=0 ; i<noOfElements;i++){
    cout<<array[i]<<"  ";
}

}