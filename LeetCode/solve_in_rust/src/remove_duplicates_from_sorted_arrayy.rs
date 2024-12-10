impl Solution {
    pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
        let mut arr: Vec<i32> = Vec::new();
        arr.push(nums[0]);
        for i in 1..nums.len() {
            if nums[i] != nums[i - 1] {
                arr.push(nums[i]);
            }
        }

        for (i, item) in arr.iter().enumerate() {
            nums[i] = *item;
        }
        let k = arr.len() as i32;
        k
    }
}
