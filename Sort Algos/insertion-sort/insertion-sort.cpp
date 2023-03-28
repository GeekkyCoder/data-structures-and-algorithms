#include<iostream>
using namespace std;

int main(){
     int a[]= {10,1,7,4,8,2,11};
    int n = sizeof(a) / sizeof(a[0]);
    
    // insertion sort 
    for(int i=1; i<n;i++){
        int temp = a[i];
        int j = i -1 ;
        while(j >=0){
            if(a[j] > temp){
                a[j+1] = a[j];
            }else {
                break;
            }
            j--;
        }
        a[j+1] = temp;
        }
        
        for(int p=0 ; p<n;p++){
            cout<<a[p]<<" ";
        }
    

    return 0;
}