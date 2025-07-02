#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  int minimumPairRemoval(vector<int> &nums) {

    int min = 1000000000;
    int index = 0;
    for (int i = 0; i < nums.size() - 2; i++) {

      int sum = nums[i] + nums[i + 1];
      if (sum < min) {
        min = sum;
        index = i;
      }
    }
    nums[i] = min;
    nums[i + 1] = min;
  }
};
