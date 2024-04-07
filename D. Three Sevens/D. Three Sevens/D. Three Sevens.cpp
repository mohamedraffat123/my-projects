// D. Three Sevens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
using ll = long long;
#include<queue>
#include<set>
#include<map>
int main()
{
	ll n;
	cin >> n;
	map<int,int >p;
	while(n--) {
		ll o;
		cin >> o;
		for (int i = 0; i < o; i++) {
			int r;
			cin >> r;
			for (int j = 0; j < r; j++) {
				ll f; 
				cin >> f;
				p.insert({ i+1,f});
			}		
		}
	}
	for (auto d : p) {
		cout << d.second << " " << d.first << endl;
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
