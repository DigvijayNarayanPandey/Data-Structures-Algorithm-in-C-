#include <bits/stdc++.h>
using namespace std;

int majorityElement(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > size / 2)
        {
             return arr[i];
        }
    }
}

int main()
{
    int n;
    cout << "Enter the Size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The Majority Element(n/2) is: " << majorityElement(arr, n);

    delete[] arr;
    return 0;
}