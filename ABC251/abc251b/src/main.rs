// -*- coding:utf-8-unix -*-

use proconio::input;

// ABC086C - Traveling
// https://atcoder.jp/contests/abs/tasks/arc089_a

fn main() {
    input! {
        n: usize,
        w: usize,
        mut a: [usize; n],
    }
    let mut b = vec![0; n * (n - 1) / 2];
    let mut c = vec![0; n * (n - 1) * (n - 2) / 6];
    let mut num_list: Vec<usize> = Vec::new();
    for _ in 0..w {
        num_list.push(1);
    }
    let mut count_b = 0;
    let mut count_c = 0;
    let mut ans = 0;
    for i in 0..n {
        for j in i..n {
            if i != j && i < j {
                b[count_b] = a[i] + a[j];
                count_b += 1;
            }
        }
    }
    for i in 0..n {
        for j in i..n {
            for k in j..n {
                if i != j && j != k && i != k && i < j && j < k {
                    c[count_c] = a[i] + a[j] + a[k];
                    count_c += 1;
                }
            }
        }
    }
    for i in 0..n {
        if a[i] <= w && num_list[a[i] - 1] == 1 {
            num_list[a[i] - 1] = 0;
            ans += 1;
        }
    }
    for i in 0..n * (n - 1) / 2 {
        if b[i] <= w && num_list[b[i] - 1] == 1 {
            num_list[b[i] - 1] = 0;
            ans += 1;
        }
    }
    for i in 0..n * (n - 1) * (n - 2) / 6 {
        if c[i] <= w && num_list[c[i] - 1] == 1 {
            num_list[c[i] - 1] = 0;
            ans += 1;
        }
    }
    println!("{}", ans);
}
