// U. New Words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string s;
	int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0,t=0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {//pemigdbeigyypetet
		if (s[i] == 'E' || s[i] == 'e') {
			sum++;
		}
		else if (s[i] == 'G' || s[i] == 'g') {
			sum1++;
		}
		else if (s[i] == 'P' || s[i] == 'p') {
			sum2++;
		}
		else if (s[i] == 't' || s[i] == 'T') {
			sum3++;
		}
		else if (s[i] == 'y' || s[i] == 'Y') {
			t++;
		}
	}
	int i = min(sum, sum1);
	int g = min(sum3, sum2);
	int res = min(g, i);
	cout << min(res,t) << endl;

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
