#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void bubbleSort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            bool isSwap = false;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    isSwap = true;
                }
            }
            if (!isSwap)
            {
                return;
            }
        }
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the Size of the Array: ";
    cin >> n;

    int *arr = new int[n]; // Allocate memory after reading the size
    cout << "Enter " << n << " Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sol.bubbleSort(arr, n);

    cout << "Array after Bubble sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Free the allocated memory
    return 0;
}
