// A. Meximization4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
#include<queue>
#include<set>
#include<deque>
int main()
{
	
	int n;
	cin >> n;
	while (n--) {
		int y,t;
		multiset<int>l,m;
		cin >> y;
		for (int i = 0; i < y; i++) {
			cin >> t;
			l.insert(t);
			int u =l.count(t);
			if (u == 2) {
				l.erase(l.find(t));
				m.insert(t);
			}
		}
		for (auto g : l) {
			cout << g << " ";
		}
		for (auto k : m) {
			cout << k<<" ";
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
