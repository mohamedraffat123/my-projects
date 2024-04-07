#include <iostream>
#include<vector>
using namespace std;
void direction(string s) {
    int ud = 0, lr = 0, flag = 0;
    vector<char>a(s.begin(), s.end());
    for (auto i : a) {
        if (i == 'U') { ud++; }
        if (i == 'D') { ud--; }
        if (i == 'L') { lr--; }
        if (i == 'R') { lr++; }
        if (1 == ud && lr == 1) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++) {
        int d; string s;
        cin >> d >> s;
        direction(s);
    }
    return 0;
}
