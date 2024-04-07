// searching.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    long long *z, n, s,f=0,y,l=0;
    cin >> n;
    z = new long long[n];
    for (long i = 0; i < n; i++) {
        cin >> z[i];
    }
    cin >> s;
    for (long j = 0; j < n; j++) {
        if (s == z[j]) {
            y = j;
            f = 1;
            break;
        }
    }
    if (f == 1) {
        cout << y;
    }
    else {
        cout << -1;
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
