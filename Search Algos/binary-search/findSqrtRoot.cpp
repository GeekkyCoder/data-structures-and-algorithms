#include <iostream>
using namespace std;

int findSquareRoot(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    cout << "enter the num you want to calculate square root of: ";
    int num;
    cin >> num;

    int result = findSquareRoot(num);
    cout << "square root of " << num << " is :" << result << endl;
}