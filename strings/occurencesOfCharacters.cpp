#include <iostream>
using namespace std;

/* GFG challange
 Maximum Occuring Character
 https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
*/

void findOccurences(int arr[], string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        int number = 0;
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }

        arr[number]++;
    }

    // for(int i=0; i<26;i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;
}

int findMaxi(int arr[])
{
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
            ans = i;
        }
    }

    return ans;
}

int main()
{
    string s = "testsample";
    int arr[26] = {0};

    findOccurences(arr, s);

    int ans = findMaxi(arr);

    char ch = 'a' + ans;

    cout << ch << endl;

    // cout<<'a'+19<<endl;

    return 0;
}
