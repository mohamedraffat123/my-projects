// A. Following Directiins.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<list>
#include<queue>
using namespace std;
int main()
{
   int n;
    cin >> n;
    while (n > 0) {
        int d,ud=0,lr=0; string s;
        cin >> d>>s;
        vector<char>a(s.begin(),s.end());
        for (auto i : a) {
            if (i == 'U') {
                ud++;
            }
            else if (i == 'D') {
                ud--;
            }
            else if (i == 'L') {
                lr--;
            }
            else if (i == 'R') {
                lr++;
            }
            if (lr == ud && lr == 1) {
                cout << "YES"<<endl;
                break;
            }
            else {
                cout << "NO" << endl;
                break;
            }
        }
       
    }
    return 0;
}

