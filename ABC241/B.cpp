#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b{m};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto ans = lower_bound(a.begin(), a.end(), b[i]);
        if (ans >= a.end() || *ans != b[i])
        {
            cout << "No" << endl;
            return 0;
        }
        else
        {
            a.erase(ans);
        }
    }
    cout << "Yes" << endl;
}