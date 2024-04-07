// B. Greg's Workout.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<algorithm>
#include <iostream>
#include<stack>
#include<list>
#include<queue>
using namespace std;
int main()
{
    int n,j;
    vector<pair<int, string>>l;
    cin >> n;
    int z = 0, r = 0, t = 0, k = 1, e = 0;
    for (int i = 0; i < n; i++) {  
        cin >> j;
        if (i % 3 == 0 ) {
            z += j;
            l.push_back({ z,"chest" });
        }
        else if (i==3*k-2) {
            r += j;
            l.push_back({ r,"biceps" });
            k++;
        }
        else if (i==2+3*e) {
            t += j;
            l.push_back({ t,"back" });
            e++;
        }
    }
    sort(l.begin(), l.end());
    cout << l.back().second << endl;
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
