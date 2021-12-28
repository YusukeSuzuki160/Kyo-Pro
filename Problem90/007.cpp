#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

class BinarySearch
{
private:
    int start = 0;
    int end;
    int mid = 0;
    int flag = 0;
    std::vector<int> a;

public:
    BinarySearch(int n, std::vector<int> a)
    {
        this->end = n - 1;
        this->a = a;
    }
    int search(int key);
};

int BinarySearch::search(int key)
{
    int low = start;
    int high = end;
    if (key < a[start])
    {
        return a[start];
    }
    else if (key > *(a.end() - 1))
    {
        return *(a.end() - 1);
    }
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return a[mid];
        }
        else if (a[mid] < key && a[mid + 1] > key)
        {
            return (abs(key - a[mid]) > abs(key - a[mid + 1])) ? a[mid + 1] : a[mid];
        }
        else if (a[mid] > key && a[mid - 1] < key)
        {
            return (abs(key - a[mid]) > abs(key - a[mid - 1])) ? a[mid - 1] : a[mid];
        }
        else if (high - low == 1)
        {
            return (abs(key - a[low]) > abs(key - a[high])) ? a[high] : a[low];
        }
        else if (high == low)
        {
            return a[low];
        }
        if (a[mid] < key && a[mid + 1] <= key)
        {
            low = mid + 1;
            continue;
        }
        else if (a[mid] > key && a[mid - 1] >= key)
        {
            high = mid - 1;
            continue;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    vector<int> b(q);
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }

    if (n != 1)
    {
        sort(a.begin(), a.end());
        BinarySearch bs(n, a);
        for (int i = 0; i < q; i++)
        {
            cout << abs(b[i] - bs.search(b[i])) << endl;
        }
    }
    else
    {
        for (int i = 0; i < q; i++)
        {
            cout << abs(b[i] - a[0]) << endl;
        }
    }

    return 0;
}