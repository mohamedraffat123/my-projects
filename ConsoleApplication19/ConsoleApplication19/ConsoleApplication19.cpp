// ConsoleApplication19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--) {
		int z;
		cin >> z;
		int* arr;
		arr = new int[z];
		for (int i = 0; i < z; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + z);
		int ans=0;
		for (int x = 1; x <= 100; x++) {
			int r = z-1, l = 0, count = 0;
			while (l < r) {//1 2 3 4 5
				if ( arr[r] +arr[l] == x) {
					count++;
					l++;
					r--;
				}
				else if (arr[r]+arr[l] < x) {
					l++;
				}
				else {
					r--;
				}
			}
			ans = max(count, ans);
		}
		cout << ans << endl;
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
