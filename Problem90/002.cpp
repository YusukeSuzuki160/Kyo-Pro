#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        return 0;
    }
    else
    {
        vector<int> a(n - 2);
        for (int i = 0; i < (n - 2) / 2; i++)
        {
            a[i] = 0;
        }
        for (int i = (n - 2) / 2; i < n - 2; i++)
        {
            a[i] = 1;
        }
        do
        {
            int count0 = 1;
            int count1 = 0;
            int flag = 0;
            for (int j = 0; j < n - 2; j++)
            {
                if (a[j] == 0)
                {
                    count0++;
                }
                else if (a[j] == 1)
                {
                    count1++;
                }
                if (count0 < count1)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                continue;
            }
            cout << '(';
            for (int i = 0; i < n - 2; i++)
            {
                if (a[i] == 0)
                {
                    cout << '(';
                }
                else
                {
                    cout << ')';
                }
            }
            cout << ')' << endl;
        } while (next_permutation(a.begin(), a.end()));
    }
}