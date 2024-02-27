#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int min_value = *min_element(v.begin(), v.end());
    int min_count = count(v.begin(), v.end(), min_value);
    if (min_count == n) {
        cout << "no" << endl;
        return;
    }
    if (min_count == 1) {
        cout << "yes" << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (v[i] != min_value && v[i] % min_value != 0) {
            cout << "yes" << endl;
            return;
        }
    }
    cout << "no" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        test();
    }
    return 0;
}
