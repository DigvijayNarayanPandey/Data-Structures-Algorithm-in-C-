#include <bits/stdc++.h>
using namespace std;

int partion(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while(i < j)
    {
        while(arr[i] <= pivot && i <= high - 1)
            i++;
        while(arr[j] >= pivot && j >= low + 1)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qS(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partion(arr, low, high);
        qS(arr, low, pIndex - 1);
        qS(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> &arr, int size)
{
    qS(arr, 0, size - 1);
    return arr;
}

void userInput()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, n);
    cout << "Array after Quick Sort is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

int main()
{
    userInput();
    return 0;
}