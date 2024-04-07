// W. Shape3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = n - 1; j >= i; j--) {
			cout << " ";
		}
		for (int z = 1; z <= 2 * i - 1; z++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int k =  1 ; k <= n; k++) {
		for (int d = 1; d < k; d++) {
			cout << " ";
		}
		for (int f = 2 * n - 1; f >= 2 * k - 1; f--) {
			cout << "*";
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
