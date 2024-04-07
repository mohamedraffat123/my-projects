// I. Count Vowels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int index = 0, sum=0;
void rec(string s) {
    if (index == s.length()) {
        cout << sum;
        return;
     }
    if (s[index] == 'a' || s[index] == 'A' || s[index] == 'e' || s[index] == 'E'
        || s[index] == 'u' || s[index] == 'U' || s[index] == 'o' || s[index] == 'O'
        || s[index] == 'i' || s[index] == 'I') {
        sum++;
    }
    index++;
    rec(s);
}
int main()
{
    string s;
    getline(cin, s);
    rec(s);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
