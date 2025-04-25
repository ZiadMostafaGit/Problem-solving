int maxval = 0;

public:
int diameterOfBinaryTree(TreeNode *root) {

  int temp = get_height(root);
  return maxval;
}

int get_height(TreeNode *root) {

  if (!root) {
    return 0;
  }

  int left_height = get_height(root->left);
  int right_height = get_height(root->right);
  maxval = max(maxval, left_height + right_height);
  return 1 + max(left_height, right_height);
}
