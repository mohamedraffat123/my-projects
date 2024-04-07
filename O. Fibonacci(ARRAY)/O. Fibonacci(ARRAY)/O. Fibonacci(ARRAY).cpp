// O. Fibonacci(ARRAY).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	long long n,*z,sum=0;
	cin >> n;
	z = new long long[n];
	z[0] = 0;
	z[1] = 1;
	if (n == 1) {
		cout << z[0];
	}
	else if(n==2)
	{	
		cout << z[1];
	}
	else {
		for (int i =0 ; i < n-2; i++) {//0 0+1=1   1
			z[i+2]=z[i]+z[i+1];
		}
		cout << z[n - 1];
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
