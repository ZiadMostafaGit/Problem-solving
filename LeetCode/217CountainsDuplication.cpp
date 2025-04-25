#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*
Given an integer array nums, return true if any value appears at least twice in
the array, and return false if every element is distinct.



Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

Input: nums = [1,2,3,4]
The element 1 occurs at the indices 0 and 3.

Example 2:


Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true





*/

class Solution {
public:
  static bool containsDuplicate(vector<int> &nums) {

    unordered_map<int, int> map;

    for (int num : nums) {

      if (map.find(num) != map.end()) {
        return true;
      }
      map[num] = num;
    }

    return false;
  }
};

int main() {

  vector<int> nums = {1, 2, 3};
  bool res = Solution::containsDuplicate(nums);
  cout << res << endl;
}
