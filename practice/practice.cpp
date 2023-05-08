#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // bubble sort
    vector<int> array = {5, 10, 44, 21, 32};

    // bubble sort

    // for(int pass =0; pass < array.size()-1; pass++){
    //   for(int j=0; j < array.size() - pass -1; j++){
    //       if(array[j] > array[j+1]){
    //           swap(array[j],array[j+1]);
    //       }
    //   }
    // }

    // selection sort
    int n = array.size();

    // for(int i=0; i<n;i++){
    //     int smallest = i;
    //     for(int j=i+1; j < n; j++){
    //       if(array[j] < array[smallest]){
    //           smallest = j;
    //       }
    //     }

    //     swap(array[i],array[smallest]);
    // }

    // inerstion sort
    //   for (int i = 1; i < n; i++)
    //     {
    //       int temp = array[i];
    //       int j = i - 1;

    //       while (j >= 0)
    // 	{
    // 	  if (array[j] > temp)
    // 	    {
    // 	      array[j + 1] = array[j];
    // 	    }
    // 	  else
    // 	    {
    // 	      break;
    // 	    }
    // 	  j--;
    // 	}

    //       array[j + 1] = temp;
    //     }

    // binary search
    // int element = 5;
    // int start = 0;
    // int end = n - 1;

    // int mid = (start + end) / 2;

    // int found = 0;

    // while(start<=end){
    //     if(array[mid] == element){
    //         found = 1;
    //         break;
    //     }else if(element > array[mid]){
    //         start = mid +1;
    //     }else if(element < array[mid]){
    //         end = mid -1;
    //     }

    //     mid = (start + end) / 2;
    // }

    // if(found){
    //     cout<<"element found";
    // }else {
    //     cout<<"element not found";
    // }

    cout << endl;

    // print
    //   for (int i = 0; i < array.size (); i++)
    //     {
    //       cout << array[i] << " ";
    //     }

    return 0;
}
