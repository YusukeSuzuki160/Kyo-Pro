#include <bits/stdc++.h>
using namespace std;

inline void change_int(int i, int j, int m, vector<int> c, vector<int> d);
inline bool check_equal(vector<int> a, vector<int> b, vector<int> c, vector<int> d, int m);
int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    if (m == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    vector<int> a(m);
    vector<int> b(m);
    vector<int> c(m);
    vector<int> d(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
        cin >> d[i];
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            change_int(i, j, m, c, d);
            if (check_equal(a, b, c, d, m))
            {
                cout << "Yes" << endl;
                return 0;
            }
            change_int(i, j, m, c, d);
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            change_int(i, j, m, c, d);
            for (int k = i + 1; k <= m; k++)
            {
                for (int l = k + 1; l <= m; l++)
                {
                    change_int(k, l, m, c, d);
                    if (check_equal(a, b, c, d, m))
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                    change_int(k, l, m, c, d);
                }
            }
            change_int(i, j, m, c, d);
        }
    }
    cout << "No" << endl;
    return 0;
}

inline void change_int(int i, int j, int m, vector<int> c, vector<int> d)
{
    for (int k = 0; k < m; k++)
    {
        if (c[k] == i)
        {
            c[k] = j;
        }
        else if (c[k] == j)
        {
            c[k] = i;
        }
        if (d[k] == i)
        {
            d[k] = j;
        }
        else if (d[k] == j)
        {
            d[k] = i;
        }
    }
}

inline bool check_equal(vector<int> a, vector<int> b, vector<int> c, vector<int> d, int m)
{
    for (int i = 0; i < m; i++)
    {
        if (a[i] > b[i])
        {
            int tmp = a[i];
            a[i] = b[i];
            b[i] = tmp;
        }
        if (c[i] > d[i])
        {
            int tmp = c[i];
            c[i] = d[i];
            d[i] = tmp;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
                tmp = b[j];
                b[j] = b[j - 1];
                b[j - 1] = tmp;
            }
            if (c[j] < c[j - 1])
            {
                int tmp = c[j];
                c[j] = c[j - 1];
                c[j - 1] = tmp;
                tmp = d[j];
                d[j] = d[j - 1];
                d[j - 1] = tmp;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (b[i] < b[i - 1] && a[i] == a[i - 1])
            {
                int tmp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = tmp;
                tmp = b[i];
                b[i] = b[i - 1];
                b[i - 1] = tmp;
            }
            if (d[i] < d[i - 1] && c[i] == c[i - 1])
            {
                int tmp = c[i];
                c[i] = c[i - 1];
                c[i - 1] = tmp;
                tmp = c[i];
                c[i] = c[i - 1];
                c[i - 1] = tmp;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if ((a[i] == c[i] && b[i] == d[i]) || (a[i] == d[i] && b[i] == c[i]))
        {
            if (i == m - 1)
            {
                return true;
            }
        }
        else
        {
            break;
        }
    }
    return false;
}