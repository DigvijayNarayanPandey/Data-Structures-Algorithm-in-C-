#include <bits/stdc++.h>
using namespace std;

int maximunConsecutiveOnes(vector<int> &array)
{
    int count = 0;
    int size = array.size();
    int maxi = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}

void readArray(vector<int> &arr)
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    arr.resize(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main() {
    vector<int> array;
    readArray(array);

    cout << "Maximum consecutive one's are: " << maximunConsecutiveOnes(array) << endl;

    return 0;
}
