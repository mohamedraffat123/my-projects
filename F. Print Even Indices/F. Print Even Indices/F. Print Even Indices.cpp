// F. Print Even Indices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int index=0; int arr[100000];
int flag = 1;
int rec(int n){
    if (index == n-1) {
        return;
    }
    cin >> arr[index];
    /*if (index % 2 == 0) {
        cout << arr[index] << " ";
    }*/
     index++;
     return arr[index]+rec(n);
}
void rec2(int n) {
    int i =rec(n);
    if (i-1 % 2 == 0 && n > 0) {
        cout << arr[i - 1] << " ";
    }
    rec2(n - 1);
}
int main()
{
    int n;
    cin >> n;
    rec2(n);
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
