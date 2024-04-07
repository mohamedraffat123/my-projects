// A. Power Of Two.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	long long n, flag = 0;
	cin >> n;
	if (n == 1) {
		flag = 1;
	}
	while (n % 2 == 0 && n>=0) {
		flag = 1;
		n /= 2;
		if (n % 2 == 1 &&n>1) {
			flag = 0;
			break;
		}
		
	}
	if (flag) {
		cout << "YES";
	}
	else {
		cout << "NO";
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
