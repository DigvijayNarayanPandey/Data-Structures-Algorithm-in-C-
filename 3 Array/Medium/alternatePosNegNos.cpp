#include <bits/stdc++.h>
using namespace std;

vector<int> alternatePosNegNos (vector<int> &a)
{
    int n = a.size(), positive = 0, negative = 0;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[negative] = a[i];
            negative += 2;
        }
        else
        {
            a[positive] = a[i];
            positive += 2;
        }
    }
    return ans;
}
void userInput()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> array(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    vector<int> result = alternatePosNegNos(array);
    cout << "The alternate elements are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    
    userInput();
    return 0;
}