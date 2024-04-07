// ConsoleApplication13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<array>
using namespace std;
int main()
{
	long long n, p, d[8]{}, e = 10, q = 0;
	string s;
	cin >> s;
	n = stoi(s);
	
	for (int i = s.size()-1; n > 0 && i >=0;i--) {
		p=n% e;
		if (p > 0) {
			d[i] = p;
		}
		else {
			d[i] = NULL;
			continue;
		}
		
		
		
			 n /= e;
		
       cout << d[i] << endl;
		
		
	}
	for (int j = s.size()-1;j >= 0;j--) {
		if (d[j] == d[s.size() - j]) {
			q = 1;
		}
		
	}
	if (q == 1) {
		cout << "yes";
	}
	else {
		cout << "no";
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
