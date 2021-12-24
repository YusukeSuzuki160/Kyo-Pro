#include <iostream>
#include <string>
#include <vector>

class DeepFirstSearch //ノード１から深さ優先探索
{
private:
    int n;                           //ノードの数
    std::vector<std::vector<int>> a; //隣接行列
    std::vector<int> visit;

public:
    DeepFirstSearch(int n, std::vector<std::vector<int>> a)
    {
        this->n = n;
        this->a = a;
        this->visit.resize(this->n + 1);
        for (int i = 0; i < n + 1; i++)
        {
            this->visit[i] = 0;
        }
    }
    void search_root(int i);
};

void DeepFirstSearch::search_root(int i)
{
    visit[i] = 1;
    for (int j = 1; j <= n; j++)
    {
        if (a[i][j] == 1 && visit[j] == 0)
        {
            std::cout << i << "->" << j << " ";
            search_root(j);
        }
    }
}

int main()
{
    std::vector<std::vector<int>> a = {{0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 1, 1, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 0, 1, 0}, {0, 0, 1, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 1, 0, 1, 0, 0}, {0, 0, 0, 0, 0, 1, 0, 1, 1}, {0, 0, 0, 1, 0, 0, 1, 0, 1}, {0, 0, 0, 0, 0, 0, 1, 1, 0}};
    int n = 8;
    DeepFirstSearch df(n, a);
    df.search_root(1);
    std::cout << std::endl;
}