// A. Regular Bracket Sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stack>
using namespace std;
int main()
{
	int n; string s;
	stack<char>l;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		int count = s.size();
		if (s.size() % 2 == 0 && s[0]!=')') {
			for (int j = 0; j < s.size() / 2; j++) {
				if (s[j] == '(' || s[j] == '?') {
					l.push(s[i]);
				}
				else {
					l.pop();
					if (s[j + 1] == ')' && j!=(s.size()/2)-1) {
						cout << "NO" << endl;
						continue;
					}
				}
				
			}
			for (int z = s.size() / 2; z < s.size(); z++) {
				char ch = l.top();
				if( ((s[z] == ')' && ch == '(')||(s[z]=='?'&&ch=='?')||(s[z]==')' && ch=='?')) && l.empty()!=true
					&&( z != s.size() - 1 && ((s[z] == '(' && s[z + 1] == ')') || (s[z] == '(' && s[z + 1] == '?')))){
					l.pop();
				}
				else{
					cout << "No" << endl;
					continue;
				}
			}
			
		}
		else {
			cout << "NO" << endl;
			continue;
		}
		if (l.empty() == true) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
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
