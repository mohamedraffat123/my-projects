// B. Turtle Math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cmath>
using ll = long long;
#include<vector>
#include<algorithm>
int main()
{
    int n;
    cin >> n;

    while (n--) {
        ll o,b,cc;
        cin >> o;
        vector<int >l(o);
        for (int i = 0; i < o; i++) {
            cin >> b;
            l.push_back(b);
        }
        sort(l.begin(), l.end(), greater<>());
        for (int j = o-1; j >1 ; j--) {
            if (j == o - 1) {
                cc = l[j];
            }
            else {
                cc %= l[j];
            }
        }
        if (cc > 0) {
            cout << "YES"<<endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

















    //deque<int>l(n);
    //while (n--) {
    //    ll o,m,count=0; 
    //    cin >> o;
    //    for (int i = 0; i < o; i++) {
    //        cin >> m;
    //        if (i == 0) {
    //            l[i] == m;
    //        }
    //        else {
    //            l[i] = l[i - 1] + m;
    //        }
    //    }
    //    for (auto p : l) {
    //        cout << p << " ";
    //    }
    //  /*  for (int j = 0; j < o; j++) {
    //        if (l.back() % 3 == 0|| (l.back()+1) % 3 == 0) {
    //            count++;
    //        }
    //        else {
    //            l.pop_back();
    //        }
    //    }
    //    cout << count << endl;*/
    //}
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
