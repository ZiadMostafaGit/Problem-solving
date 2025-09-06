struct Solution {}

impl Solution {
    pub fn ship_within_days(weights: Vec<i32>, days: i32) -> i32 {
        let mut start = 0;
        let mut end = 0;

        for &weight in weights.iter() {
            if weight > start {
                start = weight;
            }
            end += weight;
        }

        while start < end {
            let cap = start + (end - start) / 2;
            let is_cap_ok = Self::max_capacity(&weights, cap, days);
            if is_cap_ok {
                end = cap;
            } else {
                start = cap + 1;
            }
        }

        start
    }

    pub fn max_capacity(weights: &Vec<i32>, cap: i32, days: i32) -> bool {
        let mut sum = 0;
        let mut num_of_days = 1;

        for &weight in weights.iter() {
            if sum + weight > cap {
                num_of_days += 1;
                sum = 0;
            }
            sum += weight;
        }
        if num_of_days <= days {
            return true;
        }
        false
    }
}
