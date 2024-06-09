// C. Eating Candies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
		for (int i = 0; i < z; i++) { cin >> arr[i]; }
		int alice = 1, bob = 1,count=0;
		int r = z - 1, l = 0,lsum=arr[l],rsum=arr[r],ans=0;
		while (l < r) {// 2 1 4 2 4 1
			if (lsum==rsum) {
				count = alice + bob;
				ans = max(count, ans);
				rsum += arr[--r];
				lsum += arr[++l];
				alice++;
				bob++;
			}
			else if (lsum > rsum) {
				rsum += arr[--r];
				bob++;
			}
			else {
				lsum += arr[++l];
				alice++;
			}
		}
		cout << ans << endl;
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
