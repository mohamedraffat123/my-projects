// C. Sereja and Dima.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    int n,k,s=0,d=0;
    cin >> n;
    list<int >t;
    for (int i =1 ; i <= n; i++) {
        cin >> k;
        t.push_back(k);
    }
    /*for (auto a : t) {
        cout << a << " ";
    }*/
    for (int j = 0; !t.empty(); j++) {
        if (j % 2 == 0) {
            s += max(t.back(), t.front());
        }
        else {
            d += max(t.back(), t.front()); 
        }
        if (max(t.back(), t.front()) == t.back()) {
            t.pop_back();
        }
        else {
            t.pop_front();
        }
    }
    cout << s << " " << d << endl;



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
