#include<iostream>
using namespace std;

int main(){
    int a1[] = {1,2,3};
    int a2[]={3,4,5};

    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);

    int intersect = 0;
    for(int i=0; i<n1;i++){
        for(int j=0; j<n2;j++){
            if(a1[i] == a2[j]){
             intersect = a1[i];
             break;
            }
        }
    }

    cout<<intersect<<endl;
}