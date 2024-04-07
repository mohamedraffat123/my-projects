// J. Prime Factors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n,r,sum=0,flag=0,flag1,m;
	cin >> n;
	m = n;
	for (int i = 2; i <= m/2; i++) {//630   3
		flag1 = 0;
		for (int j = 1; j <= 9; j++) {
			if (n % (int)pow(i, j) == 0) {//315 35
				r = j;//4	
				flag = 1;
				flag1 = 1;
			}
			else {
				break;
			}
		}
		if (flag1) {
			n /= pow(i, r);
			cout << "(" << i << "^" << r << ")";
			if (n != 1) {
			cout << "*";
		    }
		}
	    if (n == 1) {
			break;
		}
	}
	if (flag == 0) {
		cout << "(" << n << "^" << 1 << ")";
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
