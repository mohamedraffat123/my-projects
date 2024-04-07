// G. Pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int i = 0,flag=1;
void rec(int n) {
    if (n ==0) {
        return;
    }  
    
    cout << " ";
  rec(n - 1);
}
void rec3(int n) {
    
}

int main()
{
    int n;
    cin >> n;
   
    for (int i = n; i > 0; i--) {
        rec(i-1);
        for (int j = 2*(n-i+1)-1; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
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
