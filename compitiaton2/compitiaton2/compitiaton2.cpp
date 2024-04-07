// compitiaton2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    char z[8][8];
    string d;
    cin >> n;
    for (int a = 1; a <= n;a++) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> z[i][j];
                if (z[i][j] != '.') {
                    d += z[i][j];
                  
                }
            }
        }
        cout << d << endl;
        d.clear();
    }
    

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
