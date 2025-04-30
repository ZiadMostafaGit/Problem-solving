/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
  TreeNode *res = nullptr;
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (!root)
      return nullptr;
    if (p->val < root->val && q->val < root->val)
      lowestCommonAncestor(root->left, p, q);
    else if (p->val > root->val && q->val > root->val)
      lowestCommonAncestor(root->right, p, q);
    else {
      res = root;
    }
    return res;
  }
};
