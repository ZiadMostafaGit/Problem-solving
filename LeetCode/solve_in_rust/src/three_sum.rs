pub fn three_sum(nums: Vec<i32>) -> Vec<Vec<i32>> {
    let mut nums = nums;
    let mut res: Vec<Vec<i32>> = Vec::new();
    nums.sort();

    let mut size = nums.len() - 1;
    for i in 0..nums.len() - 2 {
        let mut j = i + 1;
        if i > 0 && nums[i] == nums[i - 1] {
            continue;
        }

        while j < size {
            let val = nums[i] + nums[j] + nums[size];
            if val == 0 {
                let temp: Vec<i32> = vec![nums[i], nums[j], nums[size]];
                res.push(temp);
                j += 1;
                if j < nums.len() - 1 {
                    while nums[j] == nums[j - 1] && j < size {
                        j += 1;
                    }
                }
            } else if val > 0 && size > j {
                size -= 1;
            } else if val < 0 && j < size {
                j += 1;
            }
        }
    }
    return res;
}
