#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {11, 12, 13, 14, 15};
    vector<int> temp(nums.size());
    int k = 3;

    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }

    nums = temp;

    for (int i : nums)
    {
        cout << i << " ";
    }
}
