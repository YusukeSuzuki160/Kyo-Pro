// -*- coding:utf-8-unix -*-

use proconio::input;

use std::collections::HashMap;

// ABC086C - Traveling
// https://atcoder.jp/contests/abs/tasks/arc089_a

fn main() {
    input! {
        s: String,
    }
    let mut alfa_list = HashMap::new();
    let mut ans_flag1 = true;
    let mut ans_flag2 = false;
    let mut ans_flag3 = false;

    for c in s.as_str().chars() {
        match alfa_list.insert(c, true) {
            Some(_) => ans_flag1 = false,
            _ => (),
        }
        if c.is_uppercase() {
            ans_flag2 = true;
        }
        if c.is_lowercase() {
            ans_flag3 = true;
        }
    }

    println!(
        "{}",
        if ans_flag1 && ans_flag2 && ans_flag3 {
            "Yes"
        } else {
            "No"
        }
    );
}
