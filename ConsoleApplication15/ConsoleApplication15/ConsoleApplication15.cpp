#include <iostream>
using namespace std;
int main()
{
	int n, l = 0,p[100],c;
	cin >> n>>c;
	for (int i = 1; (n>c && i<=n)||(c>n && i<=c) ; i++) {
		if (n % i == 0 && c%i==0) {
			p[l] = i;
			l++;
		}
	}
	
		cout << p[l-1];
	
	return 0;
}