#include <functional>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> getFinalState(vector<int> &nums, int k, int multiplier) {
    using pii = pair<int, int>;

    priority_queue<pii, vector<pii>, greater<pii>> min;
    for (int i = 0; i < nums.size(); i++) {
      min.push(make_pair(nums[i], i));
    }
    for (int i = 0; i < k; i++) {
      pii the_min = min.top();
      min.pop();
      the_min.first *= multiplier;
      min.push(make_pair(the_min.first, the_min.second));
      nums[the_min.second] = the_min.first;
    }
    return nums;
  }
};
