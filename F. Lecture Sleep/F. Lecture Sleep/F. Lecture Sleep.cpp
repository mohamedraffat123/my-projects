// F. Lecture Sleep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k,r=0;
    cin >> n >> k;
    int* arr, * arr1;
    arr = new int[n];
    arr1 = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++) { 
        cin >> arr1[j];
    }
    int dd = 0;
    for (int z = 0; z < n; z++) {
        if (arr1[z] == 1) {
            dd += arr[z];
            arr[z] = 0;
        }
    }
    long long u = 0,ans=0;
    for (int q = 0; q < n-k+1; q++) {
        u = arr[q] + arr[q+1] + arr[q+2];
        u += dd;
        ans = max(ans, u);
    }
    cout << ans << endl;


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
