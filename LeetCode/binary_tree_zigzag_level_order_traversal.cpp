#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

vector<vector<int>> zigzagLevelOrder(TreeNode *root) {

  bool left_to_right = true;
  vector<vector<int>> res;
  if (!root) {
    return res;
  }
  deque<TreeNode> q;
  q.push_front(*root);
  while (!q.empty()) {

    int size = q.size();

    vector<int> level(size);
    for (int i = 0; i < size; ++i) {

      auto curr = q.front();
      q.pop_front();
      int index = 0;
      if (left_to_right) {
        index = i;
      } else {
        index = size - 1 - i;
      }
      level[index] = curr.val;
      if (curr.left) {
        q.push_back(*curr.left);
      }
      if (curr.right) {
        q.push_back(*curr.right);
      }
    }
    res.push_back(level);
    left_to_right = !left_to_right;
  }
  return res;
}
