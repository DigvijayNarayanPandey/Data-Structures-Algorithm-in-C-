#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                count++;
                if (count > 1)
                {
                    return false;
                }
            }
        }
        return true;
    }

    void userInput()
    {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        vector<int> array(n);
        cout << "Enter " << n << " elements to check if the array is sorted and rotated: ";
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        bool result = check(array);
        if (result)
        {
            cout << "The array id sorted and rotated.\n";
        }
        else
        {
            cout << "The array is not NOT sorted and rotated.\n";
        }
    }
};

int main()
{
    Solution sol;
    sol.userInput();
    return 0;
}