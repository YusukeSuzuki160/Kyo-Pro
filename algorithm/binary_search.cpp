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