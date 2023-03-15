#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int el = 12;
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                // cout << a[i] << " "
                //      << " " << a[j] << " "
                //      << " " << a[k] << " " << endl;
                if(a[i]+a[j]+a[k] == el){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                    cout<<"these triplets sum is = "<<el<<endl;
                    break;
                }
            }
            
        cout<<endl;
        }

    }
}