#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int, 6> nums{0, 1, 0, 3, 12, 0};
    int i = 0;

    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}