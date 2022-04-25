// -*- coding:utf-8-unix -*-

use proconio::input;

// ABC086C - Traveling
// https://atcoder.jp/contests/abs/tasks/arc089_a

fn main() {
    input! {
        n: usize,
        a: [usize; n],  // Vec<(i32, i32, i32)>
    }
    const MAX: usize = 200000;
    let mut c: Vec<i64> = vec![0; MAX + 1];
    for i in a {
        c[i] += 1;
    }
    let mut ans: i64 = 0;
    for q in 1..=MAX {
        for r in 1..=(MAX / q) {
            ans += c[q] * c[r] * c[q * r];
        }
    }
    println!("{}", ans);
}
