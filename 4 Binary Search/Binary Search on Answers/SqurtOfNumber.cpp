#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int findSquareRoot(int n)
    {
        int low = 1, high = n;
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            long long val = (mid * mid);
            if (val <= n)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return high;
    }
    void userInput()
    {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        int ans = findSquareRoot(n);
        cout << "Square root (floor): " << ans << endl;
    }
};

int main()
{
    solution sol;
    sol.userInput();
    return 0;
}