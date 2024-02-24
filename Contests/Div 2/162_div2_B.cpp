    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
      int t;
      cin >> t;
      while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), x(n);
        for (auto& it : a) cin >> it;
        for (auto& it : x) cin >> it;
        vector<long long> s(n + 1);
        for (int i = 0; i < n; ++i) s[abs(x[i])] += a[i];
        bool ok = true;
        long long lft = 0;
        for (int i = 1; i <= n; ++i) {
          lft += k - s[i];
          ok &= (lft >= 0);
        }
        cout << (ok ? "YES" : "NO") << '\n';
      }
    }
