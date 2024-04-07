// C. Finding Minimums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n,x,y;
	cin >> n>>x;
	int f=1,min;
	for (int i = 1; i <= n; i++) {
		cin >> y;
		if (f) {
			min = y;	
			f = 0;
		}
		else {
			if (y < min) {
				min = y;
			}
		}
		if (i % x == 0 || i==n) {
			cout << min<<" ";
			min = 0;
			f = 1;
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
