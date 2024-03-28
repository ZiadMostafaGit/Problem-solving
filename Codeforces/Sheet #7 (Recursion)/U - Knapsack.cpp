#include <iostream>
#include<vector>
#include <utility>
#include<algorithm>
using namespace std;
 
 
int knapsack(vector<pair<int, int>>& items, int n, int W) {
    if (n < 0 || W == 0) {
        return 0;
    }
 
    if (items[n].first > W) {
        return knapsack(items, n - 1, W);
    } else {
        int included = items[n].second + knapsack(items, n - 1, W - items[n].first);
        int excluded = knapsack(items, n - 1, W);
        return max(included, excluded);
    }
}
 
int main() {
    int N, W;
    cin >> N >> W;
 
    vector<pair<int, int>> items(N);
    for (int i = 0; i < N; i++) {
        cin >> items[i].first >> items[i].second;
    }
 
    int result = knapsack(items, N - 1, W);
    cout << result << endl;
 
    return 0;
}
