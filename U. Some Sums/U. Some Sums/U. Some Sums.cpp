// U. Some Sums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	long long x,y,a;
	
	cin >> x >> y >> a;
	int sum=0;
	for (int i = 1; i <= x; i++) {
		if (i / 10 == 0) {
			if (i >= y && i <= a) {
				sum += i;
			}
		}
	    else  {
				int number = i;
				int mysum = 0;
				while (number) {
					int digit=number % 10;
					mysum += digit;
					number /= 10;
				}
				if (mysum >= y && mysum <= a) {
					sum += i;
				}
			}
		
	}
	cout << sum<<endl;


	return 0;
}