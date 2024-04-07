// B. Chaya Calendar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<deque>
using namespace std;
int main()
{
    long long n,m,r;
    cin >> n;
    while (n--) {
        cin >> m >> r;
        deque<long long>l;
        long long s, product=1;
        string d;
        for(int i=0;i<m;i++) {
            cin >> s;
            l.push_back(s);
            product *= s;
        }
        cin >> d;
        int k;
        for (k = 0; k < m; k++) {
            if (k == 0) {
                cout << product % r << " ";
            }
            else {
                if (d[k-1] == 'L') {
                    product /= l.front();
                    cout << product % r << " ";
                    l.pop_front();
                }
                else if(d[k-1]=='R') {
                    product /= l.back();
                    cout << product % r << " ";
                    l.pop_back();
                }
                if (d[k-1] == 'L') {
                    l.pop_front();
                }
                else {
                    l.pop_back();
                }
            } 
        }
        
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
