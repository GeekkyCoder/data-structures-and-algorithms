#include <iostream>
using namespace std;

void updateValue(int *num)
{
    *num += 2;
}

using namespace std;

int main()
{
    char ch[6] = "abcde";
    int arr[6] = {1, 2, 3, 4, 5};
    int value = 5;

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];

    // abcde
    cout << c << endl;

    // bcde
    //    c= c + 1 ;
    //   cout<<c<<endl;

    int *num = &value;
    cout << "before num value: " << *num << endl;
    updateValue(num);
    cout << "after num value: " << *num << endl;

    return 0;
}
