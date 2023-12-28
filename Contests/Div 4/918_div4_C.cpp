#include <iostream>
#include <vector>
#include <algorithm>
#include<math.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<int> buckets(n);

        for (int i = 0; i < n; ++i) {
            cin >> buckets[i];
        }

        ll totalSquares = 0;
        for (int i = 0; i < n; ++i) {
            totalSquares += buckets[i];
        }

        ll sideLength = sqrt(totalSquares);
        if (sideLength * sideLength == totalSquares) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
