// A. Too Min Too Max.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void vv(int n, int c) {

}
int main()
{
    int n;
    cin >> n;
    while (n--) {
        int y,z=0,f;
        cin >> y;
        vector<int >l(y);
        for (int i = 0; i < y; i++) {
            cin >> f;
            l.push_back(f);
        }
        sort(l.begin(), l.end());
        for (int j = 0; j < y; j++) {
            if (abs(l[j] - l[y - 1 - j]) == 0) {
                j++;
            }
            z += abs(l[j] - l[y - 1 - j]);
        }
        cout << z << endl;
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
