#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    sort(d.begin(), d.end());
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            break;
        }
        else if (d[i] == d[i + 1])
        {
            continue;
        }
        else
        {
            k++;
        }
    }
    cout << k << endl;
    return 0;
}