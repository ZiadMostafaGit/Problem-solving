impl Solution {
    pub fn remove_element(nums: &mut Vec<i32>, val: i32) -> i32 {
        let mut arr: Vec<i32> = Vec::new();

        for i in 0..nums.len() {
            if nums[i] != val {
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
