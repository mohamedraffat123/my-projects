#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
    long long n, p, z = 0, q;
    cin >> n >> p;
    deque<long long>l(n), r(p);
    for (long long i = 0; i < n; i++) {
        cin >> l[i];
    }
    for (long long j = 0; j < p; j++) {
        cin >> r[j];
    }
    long long y;
    for (y = 0; z != p; y++) {
        if (r[z] == l[y]) {
            if (l.front() != r[z]) {
                cout << y + 1 << " ";
                l.erase(l.begin() + y);
                l.push_front(r[z]);
            }
            y = 0;
            z++;
        }
        if (l.front() == l[y]) {
            cout << 1 << " ";
            y = 0;
            z++;
        }
    }
    return 0;
}
