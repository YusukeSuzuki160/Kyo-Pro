#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    int n1 = n / c;
    int answer = 1000000000;
    for (int i = n1; i >= 0; i--)
    {
        int n2 = (n - c * i) / b;
        if (n2 < 0)
        {
            continue;
        }
        for (int j = n2; j >= 0; j--)
        {
            int k = (n - i * c - j * b) / a;
            if (k < 0)
            {
                continue;
            }

            if ((n - i * c - j * b) % a == 0)
            {
                answer = min(answer, i + j + k);
            }
        }
    }
    cout << answer << endl;
}