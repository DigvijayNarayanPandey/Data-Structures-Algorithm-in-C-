// This is better solution

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int getSecondLargest(vector<int> &arr, int n)
    {
        int largest = arr[0];
        int slargest = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > slargest && arr[i] != largest)
            {
                slargest = arr[i];
            }
        }
        return slargest;
    }
};

int main()
{
    Solution solution;

    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    cout << "Second largest = " << solution.getSecondLargest(arr1, arr1.size()) << endl;
    return 0;
}