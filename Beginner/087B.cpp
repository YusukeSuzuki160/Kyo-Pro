#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pattern = 0;
    int a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    int n = x / 50;
    int A = n / 10;
    if (A > a)
    {
        A = a;
    }
    int count = 0;
    for (int i = 0; i <= A; i++)
    {
        int B = (n - 10 * i) / 2;
        if (B > b)
        {
            B = b;
        }
        for (int j = 0; j <= B; j++)
        {
            if (n - 10 * i - 2 * j <= c)
            {
                count++;
            }
        }
    }
    cout << count;
}