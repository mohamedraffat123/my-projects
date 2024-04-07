// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s,q,n;
    cout << "enter your name ,please\n";
    getline(cin, s);
    cout << "\n enter thr number 1\n";
    cin >> q;
    cout << "\nenter the number 2\n";
    cin >> n;
    cout << "\n*********************************\n";
    cout << " the name is \n"<<s;
    cout << "\nthe charachter in 0,2,4,6,7 is\t" << s[0] << "," << s[2] << "," << s[4] << "," << s[6] << "," << s[7];
    cout << "\n the cincat for string no.1 and no.2 is\t" << q + n;
    cout << "\nits multiply is\t" << stoi(q) * stoi(n);
    
    return 0;
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
