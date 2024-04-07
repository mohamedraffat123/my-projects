// L. String Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int n,n1;
	cin >> n >> n1;
	string s,d;
	cin >> s;
    int n2,n3;
	while (n1--) {
		cin >> d;
		if (d == "pop_back") {
			s.pop_back();
		}
		else if (d == "front") {
			cout << s.front() << endl;
		}
		else if (d == "back") {
			cout << s.back() << endl;
		}
		else if (d == "sort") {
			cin >> n2 >> n3;
			sort(s.begin()+min(n2,n3)-1,s.begin()+max(n2,n3));
		}
		else if (d == "reverse") {
			cin >> n2 >> n3;
		    reverse(s.begin() + min(n2, n3) - 1, s.begin() + max(n2, n3) );
		}
		else if (d == "print") {
			cin >> n2;
			cout << s[n2-1] << endl;
		}
		else if (d == "substr") {
			cin >> n2 >> n3;
			for (int i = min(n2, n3) - 1; i < max(n2, n3); i++) {
				cout << s[i];
			}
			cout<<endl;
		}
		else {
			char ch;
			cin >> ch;
			s.push_back(ch);
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
