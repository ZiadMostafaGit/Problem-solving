#include <algorithm>
#include <iostream>
using namespace std;
int n;
int arr[30];
char oper[30];
int solve(char sighn, int i, int sum) {

  int changes = 0;
  if (i > n) {
    return 1e5;
  }
  if (i == n && sum == 0) {
    return changes;
  }
  if (sighn != ' ' && sighn != oper[i]) {
    changes++;
  }
  if (sighn == '-') {
    sum -= arr[i];
  } else if (sighn == '+') {
    sum += arr[i];
  }

  int mines = changes + solve('-', i + 1, sum);
  int plus = changes + solve('+', i + 1, sum);
  return min(mines, plus);
}
int main() {

  cout << "enter n" << endl;
  cin >> n;
  for (int i = 0; i < n - 1; i++) {
    cin >> arr[i] >> oper[i + 1];
  }
  cin >> arr[n - 1];
  oper[0] = '+';
  int res = solve(' ', -1, 0);
  if (res > 1e5) {
    cout << -1 << endl;
  } else {
    cout << res << endl;
  }
}
