#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int y;
    cin >> n;
    cin >> y;
    int n1 = y / 10000;
    int flag = 0;
    int n2 = 0;
    int n3 = 0;
    for (int i = 0; i <= n1; i++)
    {
        n2 = (y - 10000 * i) / 5000;
        for (int j = 0; j <= n2; j++)
        {
            if ((y - 10000 * i - 5000 * j) % 1000 == 0)
            {
                n3 = (y - 10000 * i - 5000 * j) / 1000;
                if (i + j + n3 == n)
                {
                    n1 = i;
                    n2 = j;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
        cout << n1 << " " << n2 << " " << n3 << endl;
    }
    else
    {
        cout << "-1 -1 -1" << endl;
    }
}