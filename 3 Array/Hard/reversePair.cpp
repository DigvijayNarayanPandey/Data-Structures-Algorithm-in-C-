#include <bits/stdc++.h>
using namespace std;

int reversePair(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > 2 * arr[j])
                count++;
        }
    }
    return count;
}
void userInput()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The number of reverse pairs is: " << reversePair(arr, n) << endl;
    delete[] arr;
}
int main()
{
    userInput();
    return 0;
}