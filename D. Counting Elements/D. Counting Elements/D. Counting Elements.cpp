// D. Counting Elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long n,*z,t=0;
	cin >> n;
	z = new long long[n];
	for (int i = 0; i < n; i++) {
		cin >> z[i];
	}
	/*3
    1 2 3
   */
	sort(z, z + n);
	
	for (int j = 0; j < n; j++) {
		int r=-1;
		for (int x = j+1; x < n; x++) {
			if (z[j] + 1 == z[x] && r!=z[x]) {
				t++;
				r = z[j] + 1;
			}
		}
	}
	cout << t;
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
