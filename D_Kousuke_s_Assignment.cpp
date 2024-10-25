#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Use prefix sums and a set to track non-overlapping segments
        unordered_set<int> seen_prefix_sums;
        seen_prefix_sums.insert(0);  // We consider the prefix sum 0 as a valid starting point
        int prefix_sum = 0, count = 0;

        for (int i = 0; i < n; i++) {
            prefix_sum += v[i];

            // If the current prefix sum has been seen before, we found a zero-sum segment
            if (seen_prefix_sums.count(prefix_sum)) {
                count++;
                // Reset the set and prefix sum to start fresh for the next non-overlapping segment
                seen_prefix_sums.clear();
                seen_prefix_sums.insert(0);  // Start fresh with the prefix sum 0
                prefix_sum = 0;
            }

            // Add the current prefix sum to the set
            seen_prefix_sums.insert(prefix_sum);
        }

        cout << count << endl;
    }

    return 0;
}
