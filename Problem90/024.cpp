#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> c(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        c[i] = abs(a[i] - b[i]);
        sum += c[i];
    }
    if (sum > k)
    {
        cout << "No" << endl;
        return 0;
    }
    if (sum % 2 == k % 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}