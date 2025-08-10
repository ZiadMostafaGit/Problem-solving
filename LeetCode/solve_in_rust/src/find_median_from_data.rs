use std::{cmp::Reverse, collections::BinaryHeap};
struct MedianFinder {
    max: BinaryHeap<i32>,
    min: BinaryHeap<Reverse<i32>>,
}

impl MedianFinder {
    fn new() -> Self {
        MedianFinder {
            max: BinaryHeap::new(),
            min: BinaryHeap::new(),
        }
    }

    //1  2 show 3 show
    fn add_num(&mut self, num: i32) {
        let diff_in_size = self.max.len() as isize - self.min.len() as isize;
        if self.max.is_empty() {
            self.max.push(num);
        } else if self.min.is_empty() {
            self.min.push(Reverse(num));
        } else if diff_in_size > 1 {
            let val = self.max.pop().unwrap();
            self.min.push(Reverse(val));
        } else if diff_in_size < -1 {
            let val = self.min.pop().unwrap().0;
            self.max.push(val);
        } else {
            let maxval = self.max.pop().unwrap();
            if num > maxval {
                self.min.push(Reverse(num));
                self.max.push(maxval);
            } else {
                self.min.push(Reverse(maxval));
                self.max.push(num);
            }
        }
    }
    fn find_median(&self) -> f64 {
        if self.max.len() > self.min.len() {
            *self.max.peek().unwrap() as f64
        } else if self.min.len() > self.max.len() {
            self.min.peek().unwrap().0 as f64
        } else {
            (*self.max.peek().unwrap() as f64 + self.min.peek().unwrap().0 as f64) / 2.0
        }
    }
}
