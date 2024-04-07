// B. Also Try Minecraft.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;
long long z [100000]={0}, a[100000] = {0};

int main()
{
    
    long long n, m,k;
    cin >> n >> m;
    deque<long long >f(n),b(n), t(n),s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        b.push_front(s[i]);
    }
    for (int j = 0; j < n-1; j++) {
        if (s[j] > s[j + 1]) {
           a[n-j-1] = s[j] - s[j + 1];
          
        }
        if (b[j] > b[j + 1]) {
            //cout << b[j] << endl;
            z[j] = b[j] - b[j + 1];
            //cout << z[j] << endl;
        }
    }
    for (int u = 0; u < n; u++) {
        if (u == 0) {
            f[u] = a[u];
            t[u] = z[u];
        }
        else {
            f[u] = f[u - 1] + a[u];
            t[u] = t[u - 1] + z[u];
        }
    }
    reverse(f.begin(), f.end());
    reverse(t.begin(), t.end());
   /* for (auto g:t) {
        cout << g << " ";
    }
    cout << endl << "============================" << endl;
    for (auto p:f) {
        cout << p << " ";
    }*/
    //10 8 8 5 5 5 0
    for (int y = 0; y < m; y++) {
        long long v, h;
        cin >> v >> h;
        if (v < h) {
            cout << f[v-1] - f[h-1]<<endl;
        }
        else {
            cout << t[h - 1] - t[v - 1]<<endl;
        }
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
