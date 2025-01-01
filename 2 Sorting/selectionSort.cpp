#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
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

    void selectionSort(vector<int> &arr, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int smallestIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[smallestIndex])
                {
                    smallestIndex = j;
                }
            }
            swap(arr[i], arr[smallestIndex]);
        }
    }

    void printArray(vector<int> &arr, int n)
    {
        cout << "Array after sorting: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
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
    sol.selectionSort(array, size);
    sol.printArray(array, size);

    return 0;
}