// J. Lucky Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	long long n,*z,rep=0,flag;
	cin >> n;
	z = new long long[n];
	for (int b = 0; b < n; b++) {
		cin >> z[b];
	}
	flag = z[0];
        for (int j = 0; j <n; j++) {
			if (flag > z[j]) {
				flag = z[j];
			}
		
		}

		for (int i = 0; i < n; i++) {
	       if (flag == z[i]) {
		   rep++;
		   }
	    }
		if (rep % 2 == 1) {
			cout << "Lucky"<<endl;
		}
		else {
			cout << "Unlucky"<<endl;
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
