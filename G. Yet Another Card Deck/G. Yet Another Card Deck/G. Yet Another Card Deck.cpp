// G. Yet Another Card Deck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<deque>
using namespace std;
int main()
{
	long long n, m, j,a;
	deque<int >l,r;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> j;
		l.push_back(j);
	}
	for (int q = 1; q <= m; q++) {
		cin >> a;
		for (int k = 0; k < n; k++) {
			if (a == l[k]) {
				int z = k + 1;
				r.push_back(z);
				l.push_front(l[k]);
				l.erase(l.begin()+k);
				break;
			}
		}
	}
	for (auto b : r) {
		cout << b << " ";
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
