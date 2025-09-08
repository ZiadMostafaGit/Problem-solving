struct Solution {}
impl Solution {
    pub fn max_distance(mut position: Vec<i32>, m: i32) -> i32 {
        position.sort();
        let mut start = 1;
        let mut end = position.last().unwrap() - position[0];
        let mut ans = 0;

        while start <= end {
            let mid = start + (end - start) / 2;
            if Self::fit_balls_to_mid(&position, mid, m) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        ans
    }

    pub fn fit_balls_to_mid(position: &Vec<i32>, mid: i32, m: i32) -> bool {
        let mut num_of_balls = 1;
        let mut number_needed = mid + position[0];
        for &pos in position.iter() {
            if pos >= number_needed {
                num_of_balls += 1;
                number_needed = pos + mid;
            }
        }
        num_of_balls >= m
    }
}
