#include <iostream>
using namespace std;

void update(int **p2)
{
    // kuch change hoga : -No
    // p2 = p2 + 1;

    // *p2 = *p2 + 1;
    // kuch change hoga: -Yes

    **p2 = **p2 + 1;
    // kuch change hoga: -Yes
}

int main()
{

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << endl;

    cout << "Before calling function: " << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    cout << endl;

    update(p2);

    cout << endl;

    cout << "After calling function: " << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    return 0;
}