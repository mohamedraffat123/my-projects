#include <iostream>
#include<deque> 
using namespace std;
int main()
{
    long long n, t, y, count = 0,en=0,ex=0;
    cin >> n;
    deque<long long >l, r;
    deque<bool>q(n+1);
    for (int i = 1; i <= n; i++) {cin >> t;l.push_back(t);}
    for (int j = 1; j <= n; j++) {cin >> y;r.push_back(y);}
   while(en!=n-1) {
        if (l[en] == r[ex]) {  en++;  ex++;  }
        else if (q[l[en]]==true) { en++; }
        else { count++; q[r[ex]] = true; ex++; }
   }
    cout << count << endl;
    return 0;
}