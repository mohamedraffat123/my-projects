#include <iostream>
#include<queue>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--) {
        long long k, a, count = 0;
        priority_queue<long long>z;
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> a;
            if (a == 0 && i == 0) {
                continue;
            }
            else {
                z.push(a);
                if (a == 0) {
                    count += z.top();
                    z.pop();
                }
            }
        }
        cout << count << endl;

    }
    return 0;
}
