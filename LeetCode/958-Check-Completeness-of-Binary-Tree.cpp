#include <queue>
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

class Solution {
public:
  bool isCompleteTree(TreeNode *root) {

    if (!root) {
      return false;
    }
    queue<TreeNode> q;

    q.push(*root);
    while (!q.empty()) {

      TreeNode curr = q.front();
      q.pop();
      if (curr.left && curr.right) {

        q.push(*curr.left);
        q.push(*curr.right);
      } else if (curr.left && !curr.left->left) {
        q.push(*curr.left);
      } else if (!curr.left && !curr.right) {
        return true;
      } else {
        return false;
      }
    }
    return true;
  }
}
}
;
