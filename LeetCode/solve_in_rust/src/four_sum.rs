impl Solution {
    pub fn four_sum(nums: Vec<i32>, target: i32) -> Vec<Vec<i32>> {
        let mut nums = nums;
        nums.sort();
        let mut res: Vec<Vec<i32>> = Vec::new();
        if nums.len() < 4 {
            return res;
        }

        for i in 0..nums.len() - 3 {
            if i > 0 && nums[i] == nums[i - 1] {
                continue;
            }
            for j in i + 1..nums.len() - 2 {
                if j > i + 1 && j < nums.len() - 2 && nums[j] == nums[j - 1] {
                    continue;
                }
                let mut left = j + 1;
                let mut right = nums.len() - 1;

                while left < right {
                    let sum = nums[i] + nums[j] + nums[right] + nums[left];
                    if sum > i32::MAX {
                        continue;
                    }
                    if sum == target {
                        let temp = vec![nums[i], nums[j], nums[left], nums[right]];
                        res.push(temp);

                        right -= 1;
                        left += 1;
                        while left < right && nums[left] == nums[left - 1] {
                            left += 1;
                        }

                        while right > left && nums[right] == nums[right + 1] {
                            right -= 1;
                        }
                    } else if sum > target {
                        right -= 1;
                    } else if sum < target {
                        left += 1;
                    }
                }
            }
        }
        return res;
    }
}
