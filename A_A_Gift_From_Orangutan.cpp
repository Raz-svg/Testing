#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        int c = v[0];
        int x = v[n - 1];

        vector<int> b(n), f(n);

        b[0] = c;

        for (int i = 1; i < n; i++) {
            b[i] = x;
        }

        for (int i = 0; i < n; i++) {
            f[i] = c - b[i];
        }

        int add = accumulate(f.begin(), f.end(), 0);

        cout << add << endl;
    }

    return 0;
}
