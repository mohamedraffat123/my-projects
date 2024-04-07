// Promo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
#include<vector>
long long s[1000000] = { 0 };
using namespace std;
int main()
{
	long long n, q;
	cin >> n >> q;
	vector<long long >prices;
	for (int i = 1; i <= n; i++) {
		int p;
		cin >> p;//
		prices.push_back(p);
	}
	sort(prices.begin(), prices.end());
	for (int t = 0; t < n;t++) {
		if(0 == t)
	    {
			s[t] = prices.back();
		}
		else {
			s[t] = s[t - 1] + prices.back();
		}
		prices.pop_back();
	}
	for (int j = 0; j < q; j++) {//5 3 1 5	 2  
		//1 2 3 5 5
		long long x, y;
		cin >> x >> y;
		if (x == y) {
			cout << s[x - 1] << endl;
		}
		else {
			cout << s[x-1] - s[x-y-1] << endl;
		}
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
