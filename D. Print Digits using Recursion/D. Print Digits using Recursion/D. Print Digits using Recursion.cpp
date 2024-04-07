// D. Print Digits using Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int index=0;
void rec(string n) {
    
    if (index == n.length()) {
        return;
    }
    cout << n[index] ;
    if (index < n.length() - 1) {
        cout << " ";
    }
    index++;
    return rec(n);
    
}
void rec2(long q) {
    if (q > 0) {
        string r;
        cin >> r;
        rec(r);
        index = 0;
        cout << endl;
        rec2(q - 1);
    }
}
int main()
{
    int  n;
    cin >> n;
    rec2(n);
    return 0;
}