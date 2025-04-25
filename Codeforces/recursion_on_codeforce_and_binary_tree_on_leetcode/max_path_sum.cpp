#include <algorithm>
#include <iostream>
using namespace std;
#define ll long long

ll n, m;
ll arr[15][15];

ll solve(int i, int j, int sum) {

  if (i > n || j > m || i < 1 || j < 1) {

    return -1e5;
  }
  if (i == n && j == m) {
    sum += arr[i][j];
    return sum;
  }
  sum += arr[i][j];

  int right = solve(i, j + 1, sum);
  int down = solve(i + 1, j, sum);
  return max(down, right);
}

int main() {

  cout << "enter n m" << endl;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> arr[i][j];
    }
  }

  cout << solve(1, 1, 0) << endl;
}
