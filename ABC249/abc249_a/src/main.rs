// -*- coding:utf-8-unix -*-

use proconio::input;

// ABC086C - Traveling
// https://atcoder.jp/contests/abs/tasks/arc089_a

fn main() {
    input! {
        a: usize,
        b: usize,
        c: usize,
        d: usize,
        e: usize,
        f: usize,
        x: usize,
    }
    let t_ta = x / (a + c);
    let tl_ta = x % (a + c);
    let t_ao = x / (d + f);
    let tl_ao = x % (d + f);
    let mut len_ta = t_ta * b * a;
    let mut len_ao = t_ao * e * d;
    let le_t = if tl_ta < a { tl_ta } else { a };
    let le_a = if tl_ao < d { tl_ao } else { d };
    len_ta += le_t * b;
    len_ao += le_a * e;
    println!(
        "{}",
        if len_ta == len_ao {
            "Draw"
        } else if len_ta > len_ao {
            "Takahashi"
        } else {
            "Aoki"
        }
    );
}
