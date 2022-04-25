// -*- coding:utf-8-unix -*-

use proconio::input;

use std::cmp;
// ABC086C - Traveling
// https://atcoder.jp/contests/abs/tasks/arc089_a

fn main() {
    input! {
        n: usize,
        k: usize,
        mut s: [String; n],  // Vec<(i32, i32, i32)>
    }
    let alfa_list = "abcdefghijklmnopqrstuvwxyz";
    let mut counter = 0;
    let mut answer = 0;
    for i in 0..(1 << n) {
        let mut sum: Vec<i32> = vec![0; alfa_list.len()];
        for j in 0..n {
            if ((i >> j) & 1) == 1 {
                for c in alfa_list.chars() {
                    match s[j].find(c) {
                        Some(_) => sum[counter] += 1,
                        _ => (),
                    }
                    counter += 1;
                }
                counter = 0;
            }
        }
        let mut now_max = 0;
        for _ in 0..alfa_list.len() {
            if sum[counter] == k as i32 {
                now_max += 1;
            }
            counter += 1;
        }
        counter = 0;
        answer = cmp::max(answer, now_max);
    }
    println!("{}", answer);
}
