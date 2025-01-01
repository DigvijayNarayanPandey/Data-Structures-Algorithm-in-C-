#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElements(int *arr, int size)
{
    vector<int> results;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > size / 3)
        {
            if (find(results.begin(), results.end(), arr[i]) == results.end()) {
                results.push_back(arr[i]);
            }
        }
    }
    return results;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> majorityElems = majorityElements(arr, n);
    if (!majorityElems.empty())
    {
        cout << "The Majority Elements (n/3) are: ";
        for (int elem : majorityElems)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Not Found!" << endl;
    }

    delete[] arr;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(int *arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[j] == arr[i])
//                 count++;
//         }
//         if (count > size / 3)
//         {
//              return arr[i];
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the Size of the array: ";
//     cin >> n;
//     int *arr = new int[n];
//     cout << "Enter " << n << " elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The Majority Element(n/3) is: " << majorityElement(arr, n);

//     delete[] arr;
//     return 0;
// }