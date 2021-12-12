#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] /= 2;
        }
        else {
            break;
        }
        if (i == n - 1) {
            count++;
            i = -1;
        }
    }
    cout << count << endl;
}