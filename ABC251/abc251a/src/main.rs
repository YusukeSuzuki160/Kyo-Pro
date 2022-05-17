// -*- coding:utf-8-unix -*-

use proconio::input;

// ABC086C - Traveling
// https://atcoder.jp/contests/abs/tasks/arc089_a

fn main() {
    input! {
        s: String,
    }
    let l = s.chars().count();
    let n = 6 / l;
    for i in 0..n {
        print!("{}", s);
    }
    print!("\n");
}
