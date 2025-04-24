vector<vector<int>> zigzagLevelOrder(TreeNode *root) {

  vector<vector<int>> res;
  if (!root)
    return res;

  deque<TreeNode *> q;
  q.push_back(root);
  bool leftToRight = true;

  while (!q.empty()) {
    int size = q.size();
    vector<int> level(size);

    for (int i = 0; i < size; ++i) {
      TreeNode *node = q.front();
      q.pop_front();

      int index = leftToRight ? i : size - 1 - i;
      level[index] = node->val;

      if (node->left)
        q.push_back(node->left);
      if (node->right)
        q.push_back(node->right);
    }

    res.push_back(level);
    leftToRight = !leftToRight;
  }

  return res;
}
