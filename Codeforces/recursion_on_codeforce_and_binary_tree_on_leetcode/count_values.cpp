#include <iostream>
#include <set>
using namespace std;
set<int> s;
int n;
int arr[30];

void solve(int counter, int i) {

  if (i >= n) {
    s.insert(counter);
    return;
  }
  s.insert(counter);
  solve(counter, i + 1);
  solve(counter + arr[i], i + 1);
  return;
}

int main() {
  cout << "enter n" << endl;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  solve(0, 0);
  cout << s.size() - 1 << endl;
}
