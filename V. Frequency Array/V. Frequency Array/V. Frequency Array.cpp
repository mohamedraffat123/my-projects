// V. Frequency Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int z[100005] = { 0 };
    for (int c = 0; c < x; c++) {
        int num;
        cin >> num;
        if (z[num] == 0) {
            z[num] = 1;
            
        }
        else {
            z[num]=z[num] + 1;
        }
    }
    for (int i = 1; i <= y; i++) {
        cout << z[i] << endl;
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
