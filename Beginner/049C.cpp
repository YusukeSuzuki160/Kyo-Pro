#include <bits/stdc++.h>
using namespace std;

bool check_dream(string str, int &i);
bool check_dreamer(string str, int &i);
bool check_erase(string str, int &i);
bool check_eraser(string str, int &i);
bool check_dreamerase(string str, int &i);
bool check_dreameraser(string str, int &i);

int main()
{
    string s;
    cin >> s;
    int i = 0;
    while (true)
    {
        if (check_dreamerase(s, i) || check_dreameraser(s, i) || check_dream(s, i) || check_dreamer(s, i) || check_erase(s, i) || check_eraser(s, i))
        {
            if (i == s.size())
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
}

bool check_dream(string str, int &i)
{
    if (i + 4 > str.size() - 1)
    {
        return false;
    }
    else if (str[i] == 'd' && str[i + 1] == 'r' && str[i + 2] == 'e' && str[i + 3] == 'a' && str[i + 4] == 'm')
    {
        if (i + 4 == str.size() - 1 || (str[i + 5] != 'e' || str[i + 6] != 'r'))
        {
            i = i + 5;
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
bool check_dreamer(string str, int &i)
{
    if (i + 6 > str.size() - 1)
    {
        return false;
    }
    else if (str[i] == 'd' && str[i + 1] == 'r' && str[i + 2] == 'e' && str[i + 3] == 'a' && str[i + 4] == 'm' && str[i + 5] == 'e' && str[i + 6] == 'r')
    {
        i = i + 7;
        return true;
    }
    else
    {
        return false;
    }
}
bool check_erase(string str, int &i)
{
    if (i + 4 > str.size() - 1)
    {
        return false;
    }
    else if (str[i] == 'e' && str[i + 1] == 'r' && str[i + 2] == 'a' && str[i + 3] == 's' && str[i + 4] == 'e')
    {
        if (i + 4 == str.size() - 1 || (str[i + 5] != 'r'))
        {
            i = i + 5;
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
bool check_eraser(string str, int &i)
{
    if (i + 5 > str.size() - 1)
    {
        return false;
    }
    else if (str[i] == 'e' && str[i + 1] == 'r' && str[i + 2] == 'a' && str[i + 3] == 's' && str[i + 4] == 'e' && str[i + 5] == 'r')
    {
        i = i + 6;
        return true;
    }
    else
    {
        return false;
    }
}
bool check_dreamerase(string str, int &i)
{
    if (i + 9 > str.size() - 1)
    {
        return false;
    }
    else if (str[i] == 'd' && str[i + 1] == 'r' && str[i + 2] == 'e' && str[i + 3] == 'a' && str[i + 4] == 'm' && str[i + 5] == 'e' && str[i + 6] == 'r' && str[i + 7] == 'a' && str[i + 8] == 's' && str[i + 9] == 'e')
    {
        if (i + 9 == str.size() - 1 || (str[i + 10] != 'r'))
        {
            i = i + 10;
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
bool check_dreameraser(string str, int &i)
{
    if (i + 10 > str.size() - 1)
    {
        return false;
    }
    else if (str[i] == 'd' && str[i + 1] == 'r' && str[i + 2] == 'e' && str[i + 3] == 'a' && str[i + 4] == 'm' && str[i + 5] == 'e' && str[i + 6] == 'r' && str[i + 7] == 'a' && str[i + 8] == 's' && str[i + 9] == 'e' && str[i + 10] == 'r')
    {
        i = i + 11;
        return true;
    }
    else
    {
        return false;
    }
}