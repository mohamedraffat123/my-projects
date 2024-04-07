// B. Regular Bracket Sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
using ll = long long;
#include<stack>
int main()
{
   
	string s; ll count=0;
	stack<char >ch;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {//    (()))(   (
		if (s[i] == '(' && i!= s.size()-1) {
			ch.push(s[i]);
		}
		else {
			if (s[i] == ')' && ch.empty()==false) {
				ch.pop();
				count += 2;
			}
		}
	}
	cout << count;
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
