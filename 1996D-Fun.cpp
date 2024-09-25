#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n, x;
        cin >> n >> x;  // Input n and x for the test case

        long long count = 0;  // Initialize the count of valid triplets

        // Iterate over all possible values of a
        for (long long a = 1; a <= x - 2; a++) {
            // Binary search for valid b
            long long low_b = 1, high_b = x - a - 1;

            while (low_b <= high_b) {
                long long mid_b = (low_b + high_b) / 2;
                long long low_c = 1, high_c = x - a - mid_b;

                // Binary search for valid c
                long long valid_c = 0;
                while (low_c <= high_c) {
                    long long mid_c = (low_c + high_c) / 2;

                    // Check if ab + ac + bc <= n holds
                    if (a * mid_b + a * mid_c + mid_b * mid_c <= n) {
                        valid_c = mid_c;  // mid_c is valid, but try to maximize
                        low_c = mid_c + 1;
                    } else {
                        high_c = mid_c - 1;
                    }
                }

                if (valid_c > 0) {
                    count += valid_c;
                    low_b = mid_b + 1;
                } else {
                    high_b = mid_b - 1;
                }
            }
        }

        // Output the count of valid triplets for this test case
        cout << count << endl;
    }

    return 0;
}
