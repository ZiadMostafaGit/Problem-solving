#include <algorithm>
#include <iostream>
using namespace std;
int n;
int arr[30];
int max_sub = 0;
int solve(int i, int count) {

  if (i >= n) {
    return 0;
  }
  if (i == n - 1) {
    if (arr[i] > arr[i - 1]) {
      count++;
    }
    return count;
  }
  if (arr[i] < arr[i - 1]) {

    return count;
  } else {
    count++;
  }

  int max_sub = solve(i + 1, count);
  return max_sub;
}

int main() {
  cout << "enter n\n";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int res = 0;
  for (int i = 1; i < n; i++) {

    res = max(res, solve(i, 1));
  }
  cout << res << endl;
}

int solve2(int i, int last) {
  if (n == 0)
    return 0;
  int leave = solve2(i + 1, last);
  int take = 0;
  if (arr[i] > last)
    take = solve2(i + 1, arr[i]) + 1;

  return max(leave, take);
}
