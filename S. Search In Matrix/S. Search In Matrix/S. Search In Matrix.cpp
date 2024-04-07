// S. Search In Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int z[100][100];
    int row,column,n,flag=0;
    cin >> row>>column;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> z[i][j];
        }
    }
    cin >> n;
    for (int x = 0; x < row; x++) {
        for (int y = 0; y < column; y++) {
            if (n == z[x][y]) {
                flag = 1;
            }
        }
    }
    if (flag == 1) {
        cout << "will not take number"<<endl;
    }
    else {
        cout << "will take number"<<endl;
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
