#include <iostream>
#include <string>
#include <vector>
using Graph = std::vector<std::vector<int>>;
class DeepFirstSearch //ノード１から深さ優先探索
{
private:
    int n;   //ノードの数
    Graph g; //隣接リスト
    std::vector<bool> seen;

public:
    DeepFirstSearch(int n, const Graph &g)
    {
        this->n = n;
        this->g = g;
        seen.assign(n, false);
    }
    void deep_first_search(int v);
};

void DeepFirstSearch::deep_first_search(int v)
{
    seen[v] = true;
    for (auto next_v : g[v])
    {
        if (seen[next_v])
        {
            continue;
        }
        std::cout << v << "->" << next_v << " ";
        deep_first_search(next_v);
    }
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    Graph g(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        std::cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    DeepFirstSearch dfs(n, g);
    dfs.deep_first_search(0);
    std::cout << std::endl;
}