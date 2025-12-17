#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // If you want to inatiallized the vectors with some values
    // vector<int> vec = {1, 2, 3, 4, 5};
    // Creating a vector of size 3 of value 5
    // vector<int> vec(3, 10);     // 10 10 10

    // Inatializing another vector of 1st vector value
    // vector<int> vec1 = {1, 2, 3, 4, 5};
    // vector<int> vec2(vec1);     // 1 2 3 4 5
    // for (int val : vec2)
    // {
    //     cout << val << endl;
    // }
    // cout << endl;

    // vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6); // Similar to push_back
    // vec.pop_back();
    // cout << "Elements are: ";
    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
    // // To access front and back elements
    // cout << "Front " << vec.front() << endl;    // 1
    // cout << "Back " << vec.back() << endl;      // 5
    // // cout << "Value at index 2 is " << vec[2] << " or " << vec.at[2] << endl;
    // // cout << "Size " << vec.size() << endl; // 5
    // // cout << vec.capacity() << endl; // 8     vectors grows exponentially

    // erase() function changes the size, but not capacity of the vector
    // vector<int> vec = {1, 2, 3, 4, 5};
    // vec.erase(vec.begin() + 2);         //2 3 4 5  erase is used to delete values and begin() always point to the zero index and if you want to delete 2nd index, then begin() + 2   // 1 2 4 5

    // vector<int> vec = {1, 2, 3, 4, 5};
    // vec.erase(vec.begin() + 1, vec.begin() + 3);        // 1 4 5 to delete a series of numbers

    // insert(value, position)
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.insert(vec.begin() + 2, 10);        //1 2 10 3 4 5
    // vec.clear();  // Deletes all the elements of the vector but the internal capacity remains the same
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}