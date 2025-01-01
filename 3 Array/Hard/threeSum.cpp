#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ThreeSum(vector<int> &nums, int n)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            if (i < 0 && nums[i] == nums[i - 1])
                continue;

            int j = i - 1, k = n - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                {
                    j++;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        return ans;
    }

    void userInput(vector<int> &arr, int &n)
    {
        cout << "Enter the size of the array: ";
        cin >> n;
        arr.resize(n);
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void printArray(vector<vector<int>> &result)
    {
        cout << "Triplets that Sum upto Zero are: ";
        for (auto &triplet : result)
        {
            for (int num : triplet)
            {
                cout << num << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    Solution sol;
    int size;
    vector<int> array;
    sol.userInput(array, size);
    vector<vector<int>> results = sol.ThreeSum(array, size);
    sol.printArray(results);

    return 0;
}