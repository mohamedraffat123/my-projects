#include<iostream>
#include<deque>
using namespace std;
int main()
{
	long long n, m, j, a;
	deque<int >l, r;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> j;
		l.push_back(j);
	}
	for (int q = 1; q <= m; q++) {
		cin >> a;
		for (int k = 0; k < n; k++) {
			if (a == l[k]) {
				int z = k + 1;
				r.push_back(z);	
				l.push_front(l[k]);
				l.erase(l.begin() + k+1);
				break;
			}
		}
	}
	for (auto b : r) {
		cout << b << " ";
	}
	return 0;
}