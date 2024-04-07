// A. Sereja and Dima.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<deque>
#include<algorithm>
int main()
{
	int n,o,sum=0,sum1=0;
	deque<int>l;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> o;
		l.push_front(o);
	}
	sort(l.begin(), l.end());
	for (int i = n-1; i >=0 ; i--) {
		if (i % 2 == 0) {sum += l[i];}
		else {sum1 += l[i];}
	}
	cout << sum1 << " " << sum;
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
