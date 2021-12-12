#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum1 += a[n - 1 - i];
        }
        else
        {
            sum2 += a[n - 1 - i];
        }
    }
    cout << sum1 - sum2 << endl;
}