#include <iostream>
#include <string>
#include <unordered_map>
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
  vector<string> doublicated;
  unordered_map<string, int> tree;
  void findDuplicateSubtrees(TreeNode *root) {
    serialize(root);
    for (string s : doublicated) {
      if (s.length() >= 2)
        cout << s << endl;
    }
  }
  string serialize(TreeNode *root) {
    if (!root)
      return "";
    string serialized = to_string(root->val)+" "  + serialize(root->left)
                        + serialize(root->right) ;
    tree[serialized]++;
    if (tree[serialized] == 2) {
      doublicated.push_back(serialized);
    }
    return serialized;
  }
};

int main() {
  // Constructing this tree:
  //         1
  //        / \
  //       2   3
  //      /   / \
  //     4   2   4
  //        /
  //       4
  TreeNode *n1 = new TreeNode(4);
  TreeNode *n2 = new TreeNode(2, n1, nullptr);
  TreeNode *n3 = new TreeNode(4);
  TreeNode *n4 = new TreeNode(2, new TreeNode(4), nullptr);
  TreeNode *n5 = new TreeNode(3, n4, n3);
  TreeNode *root = new TreeNode(1, n2, n5);

  Solution sol;
  sol.findDuplicateSubtrees(
      root); // Will print the serialized duplicate subtrees

  return 0;
}
