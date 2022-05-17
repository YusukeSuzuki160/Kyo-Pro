// -*- coding:utf-8-unix -*-

use proconio::input;
use std::collections::HashSet;

// ABC086C - Traveling
// https://atcoder.jp/contests/abs/tasks/arc089_a

fn main() {
    input! {
        n: usize,
        a: [(String, i64); n],
    }
    let mut s = Vec::new();
    let mut t = Vec::new();
    for i in 0..n {
        s.push(a[i].0.clone());
        t.push(a[i].1);
    }
    let mut ans_index = 0;
    let mut ans_point = t[0];
    let mut str_list = HashSet::new();
    str_list.insert(s[0].clone());
    for i in 1..n {
        if !str_list.contains(&s[i]) {
            str_list.insert(s[i].clone());
            if t[i] > ans_point {
                ans_point = t[i];
                ans_index = i;
            }
        }
    }
    println!("{}", ans_index + 1);
}
