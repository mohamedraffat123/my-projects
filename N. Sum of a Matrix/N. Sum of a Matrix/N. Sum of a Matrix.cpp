// N. Sum of a Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int row ,column,r=0,c=0;
int arr1[100][100],arr[100][100],arr3[100][100];
void rec() {
    if (c==column) {
        r++;
        c = 0;
        cout << endl;
    }
    if (r == row) {
        return;
    }
   arr3[r][c] =arr[r][c] + arr1[r][c];
   cout << arr3[r][c]<<" ";
   c++;
   rec();
}
int main()
{
    cin >> row >> column;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }
    for (int q = 0; q < row; q++) {
        for (int w = 0; w < column; w++) {
            cin >> arr1[q][w];
        }
    }
    rec();
  
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
