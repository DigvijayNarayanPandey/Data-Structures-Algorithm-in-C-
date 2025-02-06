#include <bits/stdc++.h>
using namespace std;

int findFloor(int arr[], int n, int x)
{
	sort(arr, arr + n);
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] <= x)
		{
			ans = arr[mid];
			// look for smaller index on the left
			low = mid + 1;
		}
		else
		{
			high = mid - 1; // look on the right
		}
	}
	return ans;
}

int findCeil(int arr[], int n, int x)
{
	sort(arr, arr + n);
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] >= x)
		{
			ans = arr[mid];
			// look for smaller index on the left
			high = mid - 1;
		}
		else
		{
			low = mid + 1; // look on the right
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
	int f = findFloor(arr, n, x);
	int c = findCeil(arr, n, x);
	return make_pair(f, c);
}

void userInput()
{
	int n, x;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the value to find floor and ceil: ";
	cin >> x;
	pair<int, int> result = getFloorAndCeil(arr, n, x);
	cout << "Floor: " << result.first << ", Ceil: " << result.second << endl;
}

int main()
{
	userInput();
	return 0;
}