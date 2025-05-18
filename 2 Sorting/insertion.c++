#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

// Method 2
// void insertionSort(int arr[], int size)
// {
//     for (int i = 0; i < size; i++){
//         for(int j = i; j > 0; j--){ 
//             if (arr[j - 1] > arr[j]){
//                 swap(arr[j - 1], arr[j]);
//             }
//          }
//     }
// }

void userInput()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";

    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    insertionSort(array, size);
    cout << "Array after insertion sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    userInput();
    return 0;
}