// C. Replacement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    long long n,*arr;
    cin >> n;
    arr = new long long[n];
    for (long i = 0; i < n; i++) {
        cin >> arr[i]; 
        if (arr[i] > 0) {
            arr[i] = 1;
        }
        else if (arr[i] == 0) {
            arr[i] == 0;
        }
        else {
            arr[i] = 2;
        }
    }
    for (int j = 0; j < n; j++) {
        cout << arr[j]<<" ";
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
