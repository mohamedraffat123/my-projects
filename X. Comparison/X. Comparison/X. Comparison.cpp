// X. Comparison.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s,sub,sub2,sub3,final;
	cin >> s;
	sub2 = s;
	final = s;
	for (int i = 0; i < s.size()-1; i++) {
		sub += s[i];
		sub2.erase(0, 1);
		sub3 = sub2;
		sort(sub.begin(), sub.end());
		sort(sub3.begin(), sub3.end());
		final = min(final, sub + sub3);
	}
	cout << final << endl;
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
