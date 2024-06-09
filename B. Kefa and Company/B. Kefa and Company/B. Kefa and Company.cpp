// B. Kefa and Company.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	
	int n,z;
	cin >> n>>z;
	vector<pair<int, int >>c;
	for (int i = 0; i < n;i++) {
		int m, d;
		cin >> m >> d;
		c.push_back({ m,d });
	}
	sort(c.begin(), c.end());
	int r = 0, l = 0;
	long long sum = 0, ans=0;
	while (l <=  r && r<n ) {
		ans = max(ans, sum);
			if ((c[r].first -c[l].first)<z) {
				sum += c[r].second;
				r++;
			}
			else {
				sum -= c[l].second;
				l++;
			}
	}
	ans = max(sum, ans);
	cout << ans;
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
