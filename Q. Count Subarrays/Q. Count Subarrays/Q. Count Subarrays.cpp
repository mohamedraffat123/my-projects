// Q. Count Subarrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, * z, l;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l;
        int sum = 0;
        z = new int[l];

        for (int j = 0; j < l; j++) {
            cin >> z[j];// 1  4  2  3  5
        }
        for (int k = 0; k < l; k++) {//[1] [1,4] [4] [2] [2,3] [2,5] [3] [3,5]
            int f = k + 1;

            int max = k;
            for (int h = k; h < l; h++) {

                if (z[k] == z[h]) {
                    sum++;
                }
                else {
                    break;
                }
            }
            while (z[max] < z[f] && f < l) {
                sum++;
                if (z[++max] < z[f++])
                    f++;

            }

        }
        cout << sum << endl;
       
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
