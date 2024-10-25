#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int p=0;p<t;p++) {
        int s;
        cin >> s;
        vector<int> q(s);  
        if (s == 1) {
            cout << "0"<<endl;
            continue;
        } else {
            q[0] = 0;
            q[1] = 1;
            for (int i = 2; i < s; i++) {
                q[i] = 0;  
            }
        }

        for (int i = 0; i < s; i++) {
            cout << q[i];
        }
        cout << endl;
    }

    return 0;
}
