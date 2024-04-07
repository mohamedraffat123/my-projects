// E1. Permutation Minimization by Deque.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
    long long n, p,z,q;
    deque<int>l,r;
    deque<bool>d;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> z;  
       l.push_back(z);
    }
    for (int j = 0; j < n; j++) {
        cin >> q;
        r.push_back(q);
    }
    for (int y = 0; y < n; y++) {
        int g = find(l[0],l[n-1],r.front());  
        cout << g << " ";
        r.pop_front();
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
