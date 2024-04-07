// K. Combination and Permutation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n,m=1,r,s=1,g=1;
	cin >> n>>r;
	for (int i = n; i >=2 ; i--) {
		m *=i;
	}
	for (int j = r; j >= 2; j--) {
		s *= j;
	}
	for (int z = (n - r); z >= 2; z--) {
		g *= z;
	}
	long long permutation = m / g;
	long long combination = m / (s * g);
	cout << combination << " " << permutation;
	return 0;
}

/*
	n!                   n!
						r!(n−r)!
(n − r)!
*/

