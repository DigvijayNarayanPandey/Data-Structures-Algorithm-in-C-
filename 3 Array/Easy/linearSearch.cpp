#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Solution
{
public:
    int LinearSearch(vector<int> &arr, int size, int x)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == x)
                return i;
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    int n, num;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be Searched: ";
    cin >> num;
    auto start = high_resolution_clock::now();
    int search = sol.LinearSearch(arr, n, num);
    if (search != -1)
    {
        cout << "The element found at: " << search + 1 << " index" << endl;
    }
    else
    {
        cout << "element not found!" << endl;
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    double duration_seconds = duration.count() / 1e6;
    cout << "Duration of program execution: " << duration_seconds << " seconds";

    return 0;
}