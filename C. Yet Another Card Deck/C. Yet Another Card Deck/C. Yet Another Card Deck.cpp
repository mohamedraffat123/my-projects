// C. Yet Another Card Deck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
    long long n, p, z=0, q;
    deque<int>l, r;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    for (int j = 0; j < p; j++) {
        cin >> r[j];
    }
    for (int y = 0;z!=p; y++) {
        if (r[z] == l[y]) {
            cout << y + 1 << " ";
            l.erase(l.begin() + y);
            l.push_front(r[z]);
            y = 0;
            z++;
       } 
    }
    for (auto q : l) {
        cout << q << " ";
    }

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
