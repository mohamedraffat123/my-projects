// U. Is B a subsequence of A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int x, y,*z,*k,sum=0;
	cin >> x >> y;
	z = new int[x];
	k = new int[y];
	for (int i = 0; i < x; i++) {
		cin >> z[i];
	}
	for (int j = 0; j < y; j++) {
		cin >> k[j];
	}
	int t=0;
	/*1 4 7
      1 7*/
	/*7 4
1 8 4 7 5 2 7
4 5 7 2 7
*/
	for (int a = 0; a < x; a++) {
		for (int b = 0; b < y; b++) {
			
				if (z[a] == k[b]) {
					z[a] = 0;
					k[b] = 0;
					sum++;
					
				}
			
		}
	}
	if (sum == y) {
		cout << "YES"<<endl;
	}
	else
	{
		cout << "NO"<<endl;
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
