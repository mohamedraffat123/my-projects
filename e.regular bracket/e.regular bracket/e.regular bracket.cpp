// e.regular bracket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<char >l;
        int count=0;
        string j;
        cin >> j;
        if (j.size() % 2 == 1||j[0]==')') {
            cout << "No" << endl;
        }
        else {
            for (int z = 0; z < j.size(); z++) {
                if(j[z]=='(')
                l.push_back(j[z]);
                if (j[z] == '?') {
                    count++;
                }
            }
            for (int i = 0; i < j.size(); i++) {
                char t = l.back();
                if (t == j[i]) {
                    l.pop_back();
                }
            }
            while (count!=0) {
                if (l.empty() == false) {
                    l.pop_back();
                    count--;
                }
                else {
                    break;
                }
            }
          
        }
        if (count != 0 || l.empty() == false) {
            cout << "NO";
        }
        else {
            cout << "YES";
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
