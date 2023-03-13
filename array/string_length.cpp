#include<iostream>
using namespace std;

int length(char string[]){
    int count = 0;
    for(int i = 0 ; string[i] != '\0';i++){
         count++;
    }

    return count;
}

int main(){
    char string[100];
    cin>>string;
    cout<<length(string)<<endl;

  return 0;
}