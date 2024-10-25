#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a >= b) {
            cout << a << endl;
        }
        else {
            int i = b - a;
            if (i >= 1 && i <= a) {
                cout << a - i << endl;
            }
            else {
                cout << 0 << endl; 
            }
        }
    }
    return 0;
}
