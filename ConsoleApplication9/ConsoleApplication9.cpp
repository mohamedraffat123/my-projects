// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main() 
{
	long long a, b;
	cin >> a >> b;
	int y = 0,m=0,n=0;
	if (b > a && (a>0 ||b>0) && a<100 && b<=100) {
		
		for (int i = a;i <= b;i++) {
			if (i % 2 == 0  ) {
				m++ ;
			}
			else if ((i) % 2 == 1) {
				n++;
			}
			else if (a = 0) {
				y = 1;
			}
			
		}
		if (m>=n || y==1) {
			cout << "YES";
		}
		else
			cout << "NO";
	}
	else if (b <  a && (a > 0 || b > 0) && a < 100 && b <= 100) {

		for (int i = b;i <= a;i++) {
			if (i % 2 == 0) {

				m++;
			}
			else if ((i) % 2 == 1) {
				n++;
			}
			else if (a = 0) {
				y = 1;
			}
		}
		if (m >= n || y == 1) {
			cout << "YES";
		}
		else
			cout << "NO";
	}
	else if (a = b) {
		cout << "YES";
	}
	else {
		cout << "NO";
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
