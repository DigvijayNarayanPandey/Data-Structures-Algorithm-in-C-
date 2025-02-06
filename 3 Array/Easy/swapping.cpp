#include <iostream>
using namespace std;

// Swapping of two numbers without using a third variable
// void swapping(int &a, int &b)
// {
//     a = a - b;
//     b = a + b;
//     a = b - a;
// }

// Swapping of two numbers by using XOR operation
void swapping(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void userInput()
{
    int a, b;
    cout << "Enter  two number a and b: ";
    cin >> a >> b;
    swapping(a, b);
    cout << "After swapping value of a is " << a << " and b is " << b << endl;
}
int main()
{
    userInput();
    return 0;
}