#include <deque>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
class Solution {
public:
  int task_scheduler(vector<char> &tasks, int n) {
    int freq[26];
    for (int i = 0; i < 26; i++) {
      freq[i] = 0;
    }
    for (int i = 0; i < tasks.size(); i++) {
      freq[tasks[i] - 'A']++;
    }

    int res = 0;
    deque<pair<int, int>> the_queue;
    priority_queue<int> heep;
    for (int i = 0; i < 26; i++) {
      if (freq[i] > 0) {
        heep.push(freq[i]);
      }
    }
    while (!heep.empty() || !the_queue.empty()) {
      if (!heep.empty()) {
        int val = heep.top();
        heep.pop();
        val--;
        if (val > 0)
          the_queue.push_back({val, res + n});
      }
      if (!the_queue.empty() && the_queue.front().second == res) {
        heep.push(the_queue.front().first);
        the_queue.pop_front();
      }
      res++;
    }
    return res;
  }
};

int main() {

  vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
  Solution s1;
  int res = s1.task_scheduler(tasks, 2);
  cout << res;
}
