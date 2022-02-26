#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '.')
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int flag1 = 0;
            int flag2 = 0;
            int flag3 = 0;
            for (int k = 0; k < 6; k++)
            {
                if (a[i][j + k] == 1)
                {
                    flag1++;
                }
                if ((j + k) == n - 1 && k != 5)
                {
                    flag1 = 0;
                    break;
                }
            }
            for (int k = 0; k < 6; k++)
            {
                if (a[i + k][j] == 1)
                {
                    flag2++;
                }
                if ((i + k) == n - 1 || k != 5)
                {
                    flag2 = 0;
                    break;
                }
            }
            for (int k = 0; k < 6; k++)
            {
                if (a[i + k][j + k] == 1)
                {
                    flag3++;
                }
                if (((i + k) == n - 1 || (j + k) == n - 1) || k != 5)
                {
                    flag3 = 0;
                    break;
                }
            }
            if (flag1 >= 4 || flag2 >= 4 || flag3 >= 4)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}