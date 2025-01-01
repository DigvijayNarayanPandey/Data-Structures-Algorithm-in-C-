#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Solution
{
public:
    void moveZerosToLeft(vector<int> &arr, int n)
    {
        int j = 0, i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};
int main()
{
    Solution sol;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    auto start = high_resolution_clock::now();

    sol.moveZerosToLeft(arr, n);

    cout << "Array after movinf all zeros to left: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "Duration of program execution: " << duration.count() << " microseconds";
    return 0;
}