// Z. Binary Search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
using namespace std;
int binarysearch(int arr[], int left, int right, int search) {
	while (right >= left) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == search) {
			return mid;
		}
		else if (search > arr[mid]) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}
int main()
{
	int x,y;
	cin >> x >> y;
	int *z;
	z = new int[x];
	/*1 5 4 3 2*/
	for (int i = 0; i < x; i++) {
		cin >> z[i];
	}
	sort(z, z + x);
	while (y--) {
		int search;
		cin >> search;
		int res = binarysearch(z, 0, x - 1, search);
		if (res == -1) {
			cout << "not found" << endl;
		}
		else {
			cout << "found" << endl;
		}
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
