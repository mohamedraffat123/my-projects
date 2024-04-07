// E. Double Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
using ll = long long;
#include<map>
const int x = 8;
#include<deque>
int main()
{
    ll n,m; cin >> n;
    while (n--) {
        cin >> m;
        map<string,bool>l;
        deque<string>q;
        for (int i = 0; i < m; i++) {
            cin >>q[i];
            l.insert({q[i],0});
        }
        for (int i = 0; i < m; i++) {
            auto it = l.begin();
            for(int j=0;j<m;j++){
                if (q[i] ==q[j] + q[j] || q[i] == q[j] + it->first) {
                    cout << 1;
                }
                it++;
            }
           
        }

       
        cout << endl;
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
