impl Solution {
    pub fn next_permutation(nums: &mut Vec<i32>) {
        let mut index = nums.len() - 1;
        while index > 0 && nums[index] <= nums[index - 1] {
            index -= 1;
        }

        if index == 0 {
            nums.sort();
            return;
        }

        let pivot = index - 1;
        let mut min = 100000000;
        let mut swap_index = nums.len() - 1;
        for i in pivot + 1..nums.len() {
            if nums[i] - nums[pivot] > 0 && nums[i] - nums[pivot] < min {
                min = nums[i];
                swap_index = i;
            }
        }

        nums.swap(pivot, swap_index);

        nums[index..].sort();
    }
}
