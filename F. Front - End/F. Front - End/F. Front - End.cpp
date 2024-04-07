// F. Front - End.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n,*z,*f;
    cin >> n;
    z = new int[n];
    f = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> z[i];
    }
    int right = n - 1;
    int left = 0;
    int j = 0;
    while (right >= left) {
        f[j] = z[left];
        left++;
        j++;
        f[j] = z[right];
        right--;
        j++;
    }
    for (int r = 0; r < n; r++) {
        cout << f[r]<<" ";
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
