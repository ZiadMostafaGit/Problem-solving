#include <queue>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> findXSum(vector<int> &nums, int k, int x) {
    vector<int> res(nums.size() - k + 1);

    for (int i = 0; i < nums.size() - k + 1; i++) {

      priority_queue<pair<int, int>> max;
      int freq[60] = {};
      for (int j = i; j < i + k; j++) {
        freq[nums[j]]++;
      }
      for (int z = 0; z < i + k; z++) {
        if (freq[z] >= x) {
          max.push(make_pair(freq[z], nums[z]));
        }
      }
      if (max.size() < x) {
        for (int f = i; f < i + k; f++) {
          res[i] += nums[f];
        }
      } else {

        for (int k = 0; k < x; k++) {

          pair<int, int> top = max.top();
          max.pop();
          for (int t = i; t < i + k; t++) {
            if (nums[t] == top.second) {
              res[i] += top.second;
            }
          }
        }
      }
    }
    return res;
  }
};

class Solution {
public:
  std::vector<int> findXSum(std::vector<int> &nums, int k, int x) {
    int n = nums.size();
    std::vector<int> res(n - k + 1);

    for (int i = 0; i <= n - k; ++i) {

      std::map<int, int> freq_map;
      long long current_window_sum = 0;

      for (int j = i; j < i + k; ++j) {
        freq_map[nums[j]]++;
        current_window_sum += nums[j];
      }

      std::priority_queue<std::pair<int, int>> max_pq;

      for (auto const &[val, count] : freq_map) {
        max_pq.push({count, val});
      }

      if (freq_map.size() < x) {
        res[i] = current_window_sum;
      } else {
        long long x_sum = 0;
        for (int count_extracted = 0; count_extracted < x; ++count_extracted) {
          std::pair<int, int> top = max_pq.top();
          max_pq.pop();

          x_sum += (long long)top.second * top.first;
        }
        res[i] = x_sum;
      }
    }
    return res;
  }
};
