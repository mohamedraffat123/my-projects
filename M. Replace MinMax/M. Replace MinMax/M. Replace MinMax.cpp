// M. Replace MinMax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    short int n;
     int *z,t,r,t1,r1;
    cin >> n;
    z = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> z[i];
    }
    t = z[0];
    r = z[0];
    for (int j = 0; j < n; j++) {
        if (t >= z[j]) {
            t = z[j]; 
            t1 = j;
        }
        if (r <= z[j]) {
            r = z[j];
            r1 = j;
        }
    }
    swap(z[r1], z[t1]);
    for (int w = 0; w < n; w++) {
        cout << z[w] << " ";
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
