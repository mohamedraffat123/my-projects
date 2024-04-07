// I. Smallest Pair.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	long long n,*z,l,result,min,flag=1;
	cin >> n;
	for (int x = 1; x <= n; x++) {
		cin >> l;
		z = new long long[l];
		for (int d = 0; d < l; d++) {
			cin >> z[d];
		}
		for (int i = 1; i <= l; i++) {
			for (int j = i+1; j <= l;j++) {
				 result= z[i-1] + z[j-1] + j  - i ;
				 if (flag) {
					 min = result;
					 flag = 0;
				 }
				 if (min > result && flag == 0) {
					 min = result;
				 }
			}
		result = 0;
		}
		cout << min<<endl;
		
			flag = 1;
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
