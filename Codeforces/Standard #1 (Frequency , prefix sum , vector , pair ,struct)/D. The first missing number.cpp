#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<bool> seen(2 * m + 1, false);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        seen[x + m] = true;
    }
 
    bool all_seen = true;
    for (int i = 0; i <= 2 * m; i++) {
        if (!seen[i]) {
            all_seen = false;
            cout << i - m << endl;
            break;
        }
    }
 
    if (all_seen) {
        if (!seen[m + 1]) {
            cout << m + 1 << endl;
        } else {
            cout << -(m + 1) << endl;
        }
    }
 
    return 0;
}
