#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    for (int i = 0; i < q; i++) {
        string query;
        int x, y;
        cin >> query >> x >> y;
        pair<int, int> p = {x, y};
        if (query == "lower") {
            auto it = lower_bound(a.begin(), a.end(), p);
            if (it == a.begin()) {
                cout << -1 << endl;
            } else {
                cout << (it - a.begin() - 1) << endl;
            }
        } else if (query == "upper") {
            auto it = upper_bound(a.begin(), a.end(), p);
            if (it == a.end()) {
                cout << -1 << endl;
            } else {
                cout << (it - a.begin()) << endl;
            }
        } else if (query == "find") {
            auto it = find(a.begin(), a.end(), p);
            if (it == a.end()) {
                cout << "not found" << endl;
            } else {
                cout << "found" << endl;
            }
        }
    }
    return 0;
}