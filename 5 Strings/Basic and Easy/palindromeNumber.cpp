#include <bits/stdc++.h>
using namespace std;

bool isPalinndrome(char n[])
{
    int start = 0;
    int end = strlen(n) - 1;
    while (start <= end)
    {
        if (n[start] != n[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
}

int main()
{
    char length[20];
    cout << "Enter a string: ";
    cin >> length;

    if (isPalinndrome(length))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}