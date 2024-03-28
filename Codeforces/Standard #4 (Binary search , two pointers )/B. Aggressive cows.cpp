#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int lo = 1;
    int hi = arr[n-1] - arr[0];
    int ans = 0;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int cows = 1;
        int pos = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] - pos >= mid) {
                cows++;
                pos = arr[i];
            }
        }
        if (cows >= c) {
            ans = mid;
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}