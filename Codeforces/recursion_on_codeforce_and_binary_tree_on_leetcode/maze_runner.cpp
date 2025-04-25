#include <algorithm>
#include <iostream>
using namespace std;
int n;
char maze[10][10];
bool visted[10][10];
long long x1, y1, x2, y2;

long long solve(long long x, long long y) {

  if (x < 1 || y < 1 || x > n || y > n || maze[x][y] == '#' || visted[x][y]) {

    return 1e5;
  }

  if (x == x2 && y == y2) {
    return 0;
  }

  visted[x][y] = true;
  long long down = solve(x + 1, y) + 1;
  long long up = solve(x - 1, y) + 1;
  long long right = solve(x, y + 1) + 1;
  long long left = solve(x, y - 1) + 1;
  visted[x][y] = false;

  return min({down, right, up, left});
}

int main() {
  cout << "enter n" << endl;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> maze[i][j];
    }
  }
  cout << "enter x1 y1 x2 y2" << endl;
  cin >> x1 >> y1 >> x2 >> y2;

  long long min = solve(x1, y1);
  cout << "min steps is " << min << endl;
}
