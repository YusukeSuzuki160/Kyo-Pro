#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h;
    int w;
    cin >> h;
    cin >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> b(h, vector<int>(w));
    vector<int> sum1(w, 0);
    vector<int> sum2(h, 0);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            b[i][j] = 0;
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            sum2[i] += a[i][j];
        }
    }
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            sum1[i] += a[j][i];
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            b[i][j] = sum1[j] + sum2[i] - a[i][j];
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}