#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    cin >> a;
    cin >> b;
    int amount = 0;
    for (int i = 0; i <= n; i++)
    {
        int i1 = i / 10000;
        int i2 = i / 1000 - i1 * 10;
        int i3 = i / 100 - i1 * 100 - i2 * 10;
        int i4 = i / 10 - i1 * 1000 - i2 * 100 - i3 * 10;
        int i5 = i % 10;
        int sum = i1 + i2 + i3 + i4 + i5;
        if (a <= sum && sum <= b)
        {
            amount += i;
        }
    }
    cout << amount;
}