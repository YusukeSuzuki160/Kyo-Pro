#include <bits/stdc++.h>
using namespace std;

class BinarySearch
{
private:
    int low = 0;
    int high;
    int mid = 0;
    int flag = 0;

public:
    BinarySearch(int n)
    {
        this->high = n;
    }
    int search(std::vector<int> a, int k, int n);
};

int split_check(vector<int> a, int n, int m, int k, int l)
{
    int sum = 0;
    int count = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            sum += (a[i] - a[i - 1]);
        }
        if (i == 0)
        {
            sum += a[0];
        }
        if (sum >= m)
        {
            sum = 0;
            count++;
            j = i;
        }
        if (i == n - 1 || count == k)
        {
            if (l - a[j] >= m && count == k)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }

    return 1;
}

int BinarySearch::search(std::vector<int> a, int k, int n)
{
    int l = high;
    while (low <= high)
    {
        mid = (low + high) / 2 + 1;
        int b = split_check(a, n, mid, k, l);
        if (b == 0)
        {
            if (high == mid)
            {
                return high;
            }
            low = mid;
        }
        else
        {
            if (high == mid)
            {
                if (high - low == 1)
                {
                    return low;
                }
            }
            high = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    int l;
    int k;
    cin >> n;
    cin >> l;
    cin >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k == 0)
    {
        cout << l << endl;
        return 0;
    }
    BinarySearch bc(l);
    int score = bc.search(a, k, n);
    cout << score << endl;
    return 0;
}