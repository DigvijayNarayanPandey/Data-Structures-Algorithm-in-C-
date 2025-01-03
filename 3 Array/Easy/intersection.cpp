#include <iostream>
using namespace std;

void intersectionOfTwoArrays(int *arr1, int *arr2, int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < size2; j++)
        {
            if (element == arr2[j])
            {
                cout << element << " ";
                arr2[j] = -26568;
                break;
            }
        }
    }
}
void userInput()
{
    int n, m;
    cout << "Enter the size of the array 1: ";
    cin >> n;
    cout << "Enter the size of the array 2: ";
    cin >> m;
    int *arr1 = new int[n];
    cout << "Enter " << n << " elements of array 1:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int *arr2 = new int[m];
    cout << "Enter " << m << " elements of array 2:";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << "The intersection of two sorted arrays are: ";
    intersectionOfTwoArrays(arr1, arr2, n, m);
}
int main()
{
    userInput();
    return 0;
}