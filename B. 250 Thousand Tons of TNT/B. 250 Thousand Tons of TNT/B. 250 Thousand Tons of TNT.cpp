// B. 250 Thousand Tons of TNT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<vector>
#include<cmath>
using ll = long long;
int main()
{
	int n;
	cin >> n;
	while(n--) {
		ll k, ma=0, mi=0;
		cin >> k;
		vector<int >l(k);
		for (int i = 0; i < k; i++) {
			cin >> l[i];
			if (i == 0) {
				ma = l[i]; mi = l[i];
			}
			if (i > 0) {
				ma = max(ma, l[i]);
				mi = min(mi, l[i]);
			}
		}
		//cout << ma << " " << mi << "###" << endl;
		cout << abs(ma - mi) << endl;
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
