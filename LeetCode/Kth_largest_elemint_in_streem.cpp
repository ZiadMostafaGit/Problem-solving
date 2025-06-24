class KthLargest {
private:
  priority_queue<int, vector<int>, greater<int>> max;
  int the_k;

public:
  KthLargest(int k, vector<int> &nums) {
    the_k = k;
    for (auto num : nums) {
      add(num);
    }
  }

  int add(int val) {

    if (max.size() < the_k) {
      max.push(val);
    } else {
      if (max.top() < val) {
        max.pop();
        max.push(val);
      }
    }

    return max.top();
  }
};
