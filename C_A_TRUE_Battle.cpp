#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;

    while (t--) {
        int n;  
        cin >> n;
        string binary;
        cin >> binary;

        int count_1 = count(binary.begin(), binary.end(), '1');
        int count_0 = count(binary.begin(), binary.end(), '0');

        if(count_1>count_0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
