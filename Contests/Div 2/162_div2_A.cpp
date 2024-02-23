#include<bits/stdc++.h>
using namespace std;

void test() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int up = -1, low = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1 && low == -1) {
            low = i;
        }
        if (a[i] == 1) {
            up = i;
        }
    }
    int ct = 0;
    for (int i = low; i <= up; i++) {
        if (a[i] == 0) {
            ct++;
        }
    }
    cout << ct << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test();
    }
    return 0;
}
