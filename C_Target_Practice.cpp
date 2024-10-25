#include<bits/stdc++.h>
using namespace std;

int main() {
    string input;
    string all_lines;

    cout << "Enter multiple lines (empty line to stop):\n";
    while (getline(cin, input)) {
        if (input.empty()) {
            break; // Stop if an empty line is encountered
        }
        all_lines += input + '\n';
    }

    cout << "Combined input:\n" << all_lines;
    return 0;
}
