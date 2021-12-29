#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        cin >> p[i];
    }
    int q;
    cin >> q;
    vector<int> l(q);
    vector<int> r(q);
    for (int i = 0; i < q; i++)
    {
        cin >> l[i];
        cin >> r[i];
    }
    vector<int> sum1(n, 0);
    vector<int> sum2(n, 0);
    for (int i = 0; i < n; i++)
    {
        sum1[i] = sum1[i - 1];
        sum2[i] = sum2[i - 1];
        if (c[i] == 1)
        {
            sum1[i] += p[i];
        }
        if (c[i] == 2)
        {
            sum2[i] += p[i];
        }
    }
    for (int i = 0; i < q; i++)
    {
        cout << sum1[r[i] - 1] - sum1[l[i] - 2] << " " << sum2[r[i] - 1] - sum2[l[i] - 2] << endl;
    }
    return 0;
}