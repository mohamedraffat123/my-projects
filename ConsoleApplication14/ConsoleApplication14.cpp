// ConsoleApplication14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s, t;
    long long r, l = 0, p, n;
    cin >> s;
    r = s.size();

    for (int i = s.length() - 1;i >= 0;i--) {
        t[l] = s[i];
        l++;
    }

    n = stol(s);
    p = stol(t);

    cout << p << endl;
    if (n == p) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
