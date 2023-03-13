#include <iostream>

using namespace std;

int main()
{
    int a[] = {10,3,2,22,20,18};
    int n = 5;

    // bubble sort

    // outer loop is for no of rounds
    //  0 1 2 3 4
    for (int i = 0; i < n - 1; i++)
    {

        // inner loop for no of comparsion with each element of array

        // 0 to < 4
        // 0 to < 3
        // 0 to < 2
        // 0 to < 1
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // first iteration:
                // 5 > 2 ?
                // 5 > 8?
                // 8 > 3 ?
                // 8 > 10 ?

                // second iteration:
                // 2 > 5 ?
                //  5 > 3 ?
                //  5 > 8 ?
                //  8 > 10 ?

                // third iteration:
                // 2 > 3?
                //
                swap(a[j], a[j + 1]);
            }

            // indexes:
            // first itertaion:
            // 0 1 2 3 4

            // second iteration:
            // 0 1 2 3 4

            // third iteration:
            // 0 1 2 3 4

            // fourth iteration:
            // 0 1 2 3 4

            // inner-loop bubble logic
            // first iteration:
            // 2 5 3 8 10

            // 2nd iteration:
            // 2 3 5 8 10

            // third iteration:
            // 2 3 5 8 10

            // fourth iteration:
            // 2 3 5 8 10
        }
    }

    for (int p = 0; p < n; p++)
    {
        cout << a[p] << " ";
    }

    return 0;
}