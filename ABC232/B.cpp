#include <bits/stdc++.h>
using namespace std;

int main()
{
    string alf = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    string s;
    string t;
    cin >> s;
    cin >> t;
    int k;
    int c[s.size()];
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < alf.size(); j++)
        {
            if (alf[j] == s[i])
            {
                k = j;
                break;
            }
        }
        for (int j = k; j < alf.size(); j++)
        {
            if (alf[j] == t[i])
            {
                c[i] = j - k;
                break;
            }
        }
        if (i > 0)
        {
            if (c[i] != c[i - 1])
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}