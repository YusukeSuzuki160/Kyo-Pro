#include <bits/stdc++.h>

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
        this->high = n - 1;
    }
    void search(int key, std::vector<int> a);
};

void BinarySearch::search(int key, std::vector<int> a)
{
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            std::cout << mid << std::endl;
            flag = 1;
            break;
        }
        if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

class BinarySearch2
{
private:
    int start = 0;
    int end;
    int mid = 0;
    int flag = 0;
    std::vector<int> a;

public:
    BinarySearch2(int n, std::vector<int> a)
    {
        this->end = n - 1;
        this->a = a;
    }
    int search(int key);
};

int BinarySearch2::search(int key)
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
    const int n = 10;                                           //データ数。使い時に変える。
    std::vector<int> a = {2, 3, 7, 11, 31, 50, 55, 70, 77, 80}; //ソートされた配列

    int data;
    std::cin >> data;

    BinarySearch bc(n);

    bc.search(data, a);
    return 0;
}