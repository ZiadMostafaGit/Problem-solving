int count = 0;
int sumOfLeftLeaves(TreeNode *root) {
  if (!root) {
    return 0;
  }

  if (root->left) {

    if (!root->left->left && !root->left->right) {
      count += root->left->val;

      sumOfLeftLeaves(root->right);

    } else {

      sumOfLeftLeaves(root->left);
      sumOfLeftLeaves(root->right);
    }

  } else {
    sumOfLeftLeaves(root->right);
  }

  return count;
