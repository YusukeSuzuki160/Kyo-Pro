#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> t(n + 1);
    vector<int> x(n + 1);
    vector<int> y(n + 1);
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
        cin >> x[i];
        cin >> y[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int dt = abs(t[i] - t[i - 1]);
        int dx = abs(x[i] - x[i - 1]);
        int dy = abs(y[i] - y[i - 1]);

        if (dt < (dx + dy))
        {
            cout << "No" << endl;
            return 0;
        }
        else if ((dt - dx - dy) % 2 == 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}