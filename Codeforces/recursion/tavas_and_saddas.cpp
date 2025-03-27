#include <algorithm>
#include <iostream>
using namespace std;
int n;

int solve(int sum, int idx) {

  if (sum > n) {
    return 0;
  }
  if (sum == n) {
    return idx;
  }
  int go_left = solve((sum * 10) + 4, (idx * 2) + 1);
  int go_right = solve((sum * 10) + 7, (idx * 2) + 2);
  return max(go_right, go_left);
}

int main() {
  cout << "enter n" << endl;
  cin >> n;

  int res = solve(0, 0);
  cout << res << endl;
}
