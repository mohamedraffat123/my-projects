// B. Triple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
 const long long x = 2*(10^5);
int main()
{
	int n;
	cin >> n; 
	for(int i=1;i<=n;i++) {
		int r,flag=0;
		cin >> r;
		long arr[x] = { 0 };
		while (r--) {
			int z;
			cin >> z;
			arr[z]++;
			if (arr[z] == 3) {
				cout << z<<endl;
				flag = 1;
				break;
			}
		}if (flag == 0) {
			cout << -1 << endl;
		}

	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Exiplorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
