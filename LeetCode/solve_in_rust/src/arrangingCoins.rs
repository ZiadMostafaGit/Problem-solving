use std::cmp::max;
use std::i32;

impl Solution {
    pub fn arrange_coins(n: i32) -> i32 {
        let mut start = 1;
        let mut end = n;

        let mut res = i32::MIN;
        while start <= end {
            let mid = start + (end - start) / 2;
            let mid_sum: u64 = mid as u64 + (mid as u64 * (mid as u64 - 1)) / 2;
            if mid_sum < n as u64 {
                res = max(res, mid);
                start = mid + 1;
            } else if mid_sum > n as u64 {
                end = mid - 1;
            } else {
                return mid;
            }
        }
        return res;
    }
}

struct Solution {}
