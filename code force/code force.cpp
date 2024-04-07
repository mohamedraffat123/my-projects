
// code force.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void person(int n, int h);
int main()
{
	person(3, 7);

}
void person(int n, int h) {
	int sum = 0,d;
	int x[100];
	if ((n <= 1000 && n >= 1)) {
		for (int i = 0;i < n;i++) {
			cin >> d;
			if ((d >= 1 && d <= 1000)) {
				cin >> d;
				x[i] = d;
				if (x[i] <= (2 * h) && x[i] >= 1) {
					if (x[i] > h)
						sum += 2;
					else
						sum += 1;
				}
			}
		}
		cout << sum;
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
