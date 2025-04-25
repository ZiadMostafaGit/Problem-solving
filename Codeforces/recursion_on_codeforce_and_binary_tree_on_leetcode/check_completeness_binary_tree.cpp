bool isCompleteTree(TreeNode *root) {

  if (!root) {
    return false;
  }
  queue<TreeNode> q;
  bool not_complete = false;
  q.push(*root);
  while (!q.empty()) {

    TreeNode curr = q.front();
    q.pop();
    if (curr.left && curr.right && !not_complete) {

      q.push(*curr.left);
      q.push(*curr.right);
    } else if (curr.left && !not_complete) {
      not_complete = true;
      q.push(*curr.left);
    } else if (curr.left && not_complete) {
      return false;
    } else if (!curr.left && !curr.right) {
      not_complete = true;
    } else {
      return false;
    }
  }
  return true;
}
