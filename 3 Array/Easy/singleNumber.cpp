#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int xorr = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }

    void userInput()
    {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        vector<int> array(n);
        cout << "Enter " << n << " elements in sorted order: ";
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int result = singleNumber(array);
        if (result)
        {
            cout << result << " is the sinle elements in the array.\n";
        }
        else
        {
            cout << "Single element not found!\n";
        }
    }
};

int main()
{
    solution sol;
    sol.userInput();
    return 0;
}
