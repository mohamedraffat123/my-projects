// Sereja and Dima.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<deque>
#include<algorithm>
int main()
{
	int n, o, sum = 0, sum1 = 0,p=0;
	deque<int>l;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> o;
		l.push_back(o);
	}
	for (int i = 0; i < n; i++) {
		//cout << max(l.back(), l.front());
		if (2 * p == i) {
			sum += max(l.back(), l.front());
			p++;
		}
		else {
			sum1 += max(l.back(), l.front());
		}
		if (max(l.back(), l.front()) == l.back()) {
			l.pop_back();
		}
		else {
			l.pop_front();
		}
	}
	cout << sum << " " << sum1;
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
