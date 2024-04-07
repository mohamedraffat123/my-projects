// Z. Clean Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s; int flag1=1;
    while (getline(cin, s)) {
        bool flag = 0;
        if (s.size() == 0 || s == " ") {
            continue;
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '/' && s[i + 1] == '/' && flag1==1) {
                break;
            }
            else if ((s[i] == '/' && s[i + 1] == '*')) {
                i++;
                flag1 = 0;
            }
            else if (s[i] == '*' && s[i + 1] == '/' && flag1 == 0) {
                i++;
                flag1 = 1;
            }
            else if(flag1==1) {
                    cout << s[i];
                    flag = 1;
            } 
        }
        if (flag&&flag1==1) {
            cout << endl;
        }
        
    }
   

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
