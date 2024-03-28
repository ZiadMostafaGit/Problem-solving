#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int left = 0;
    int right = 0;
    int sum = 0;
    int min_length = numeric_limits<int>::max();
    bool found = false;

    while (right < n) {
        sum += A[right];
        right++;
        while (sum >= m) {
            found = true;
            min_length = min(min_length, right - left);
            sum -= A[left];
            left++;
        }
    }

    if (found) {
        cout << min_length << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}