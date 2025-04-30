#include <iostream>
#include <iterator>
#include <stack>
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
class Solution {
public:
  bool left_sub = true;
  bool right_sub = true;
  stack<int> main_root;

  bool isValidBST(TreeNode *root) {
    if (root->val) {
      main_root.push(root->val);
    }
    cout << main_root.top() << endl;
    bool res = solve(root);

    return res;
  }

  bool solve(TreeNode *root) {

    if (!root)
      return true;
    if (root && !root->left && !root->right)
      return true;
    TreeNode *left = root->left;
    TreeNode *right = root->right;
    if (left) {

      if (root->val <= left->val)
        return false;
      if (root->val != main_root.top() && left->val < main_root.top())
        return false;
    }
    if (right) {

      if (root->val >= right->val)
        return false;
    }

    main_root.push(root->val);

    left_sub = solve(root->left);
    right_sub = solve(root->right);
    return left_sub && right_sub;
  }
};

int main() {

  TreeNode *root = new TreeNode(5);
  root->left = new TreeNode(4);
  root->right = new TreeNode(6);
  root->right->left = new TreeNode(3);
  root->right->right = new TreeNode(7);

  Solution sol;
  bool result = sol.isValidBST(root);
  cout << (result ? "true" : "false") << endl;

  return 0;
  // Clean up memory
  delete root->left;
  delete root->right;
  delete root;
  root = nullptr;
}

/*

class Solution {
public:
  bool isValidBST(TreeNode* root) {
    return validate(root, LONG_MIN, LONG_MAX);
  }

  bool validate(TreeNode* node, long minVal, long maxVal) {
    if (!node) return true;

    if (node->val <= minVal || node->val >= maxVal)
      return false;

    return validate(node->left, minVal, node->val) &&
           validate(node->right, node->val, maxVal);
  }
};


*/
