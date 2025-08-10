use std::collections::BTreeMap;

pub fn find_relative_ranks(score: Vec<i32>) -> Vec<String> {
    let mut answer = vec![String::new(); score.len()];

    let mut ordered_map = BTreeMap::new();
    for (index, &val) in score.iter().enumerate() {
        ordered_map.insert(-val, index);
    }

    let mut i = 1;
    while let Some((&neg_val, &index)) = ordered_map.iter().next() {
        ordered_map.remove(&neg_val);
        match i {
            1 => answer[index] = "Gold Medal".to_string(),
            2 => answer[index] = "Silver Medal".to_string(),
            3 => answer[index] = "Bronze Medal".to_string(),
            _ => answer[index] = i.to_string(),
        }
        i += 1;
    }

    answer
}
