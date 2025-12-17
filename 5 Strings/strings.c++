#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    cout << "Enter String: ";
    cin.getline(str, 100, '$');  //cin.getline(str, len, delim), delimiter by default bahaviour is when you press enter the input gets terminated if cin.getline(str, len, '$') the $ is the character when we enter it input of the string get's terminated. The dollar symbol can be anything like cin.getline(str, 100, '@')
    cout << str;

    // char str[12];
    // cout << "Enter char array: "; // Hello World
    // cin.getline(str, 12);
    // for (char ch: str) {
    //     cout << ch << " "; // H e l l o   W o r l d
    // }
    // cout << endl;

    // char str[] = {"Hello"};
    // int len = 0; 
    // for (int i = 0; str[i] != '\0'; i++) {
    //     len++;
    // }
    // cout << "Length of string: " << len << endl;    // Length of string: 5

    // STRINGS
    // string str = "Hello World"; // Dynamic in nature bcz resize during runtime but character arrays value can't be change at run time.
    // cout << str << endl;        // Hello World
    // str = "ABCD";
    // cout << str << endl;        // ABCD (This is not possible in Character Arrays) bcz of dynamic nature.
    

    // string str1 = "Hello";
    // string str2 = "World";
    // string str3 = str1 + str2;      // concatination
    // cout << str3 << endl;
    // cout << (str1 == str2) << endl;     // 0
    // cout << str1.length() << endl;      // 5

    // string str;
    // cout << "Enter the input string: ";
    // getline(cin, str);
    // cout << "Output: " << str << endl;

    // string str = "Hello World";
    // for (char ch : str) {
    //     cout << ch << " ";
    // }
    // cout << endl;
    //     or
    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << str[i] << " ";
    // }
    // cout << endl;

    // reverse a String
    // string str = "hello world";
    // reverse(str.begin(), str.end());
    // cout << str << endl;        // dlrow olleh
    // return 0;

}