// K. Balanced Tunnel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<deque>
using namespace std;
int main()
{
    long long n,t,y,count=0;
    cin >> n;
    deque<int >l, r;
    for (int i = 1; i <= 5; i++) {
        cin >> t;
        l.push_back(t);
    }
    for (int j = 1; j <= 5; j++) {
        cin >> y;
        r.push_back(y);
    }
    for (int z = 0; z < n; z++) {
        if (l.back() != r.back()) {
            count++;
            for (int q = 0; q < n; q++) {
                if (r.back() == l[q]) {
                    cout << l[q - 1] << endl;
                    l.erase(l.begin() - q);
                    break;
                }
            }
        }
        else {
            l.pop_back();
        }
        r.pop_back();
        cout << "===================================" << endl;
        for (auto w : l) {
            cout << w << " ";
        }
        cout << "==================================" << endl;
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
