// F. Multiplication of Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	long long arr[100][100], arr1[100][100], arr2[100][100]={0}, a, b, c, d;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> c >> d;
	for (int x = 0; x < c; x++) {
		for (int y = 0; y < d; y++) {
			cin >> arr1[x][y];
		}
	}
	int w = 0, l=0;
	for (int u = 0; u < a;u++) {//0
		for (int q = 0; q < d; q++) {//0
			for (int v = 0; v < b; v++) {//0
				arr2[u][q] += arr[u][v] * arr1[v][q];
			}
		}
	}
	for (int e = 0; e < a; e++) {
		for (int z = 0; z < d; z++) {
			cout << arr2[e][z]<<" ";
		}
		cout << endl;
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
