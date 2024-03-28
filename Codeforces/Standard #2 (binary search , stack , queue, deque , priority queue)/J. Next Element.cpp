#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> next_greater_element(const vector<int>& nums) {
    vector<int> result(nums.size(), -1);
    stack<int> s;

    for (int i = 0; i < nums.size(); ++i) {
        while (!s.empty() && nums[s.top()] < nums[i]) {
            result[s.top()] = i + 1;
            s.pop();
        }
        s.push(i);
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int q;
    cin >> q;

    vector<int> next_great = next_greater_element(a);

    for (int i = 0; i < q; ++i) {
        int query;
        cin >> query;
        cout << next_great[query - 1] << '\n';
    }

    return 0;
}