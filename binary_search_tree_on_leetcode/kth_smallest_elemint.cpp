class Solution {
public:
  int counter = 0;
  int kthSmallest(TreeNode *root, int k) {
    if (!root)
      return 0;

    int left = kthSmallest(root->left, k);
    counter++;
    if (counter == k)
      return root->val;
    int right = kthSmallest(root->right, k);

    return max(right, left);
  }
};
