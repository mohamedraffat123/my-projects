#include<iostream>
#include <string>
using namespace std;
int main() {
    int n,u=0,d=0,l=0,r=0; string s;
    cin >> n >> s;
    int p,f;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'U' ) {
            u++;
        }
        else if (s[i] == 'D') {
            d++;
        }
        else if (s[i] == 'R') {
            r++;
        }
        else if (s[i] == 'L') {
            l++;
        }
        p = min(u, d);
        f = min(r, l);
        p *= 2;
        f *= 2;
    }
    cout << p + f;
    return 0;
}