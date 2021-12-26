#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using Graph = std::vector<std::vector<int>>;
class BreadthFirstSearch //ノード１から深さ優先探索
{
private:
    int n;                 //ノードの数
    Graph g;               //隣接リスト
    std::queue<int> que;   //発見済み未訪問のノードを格納するキュー
    std::vector<int> dist; //点0からの距離

public:
    BreadthFirstSearch(int n, const Graph &g)
    {
        this->n = n;
        this->g = g;
        dist.assign(n, -1);
    }
    void breadth_first_search(int i);
    void print_distance()
    {
        for (int v = 0; v < n; v++)
        {
            std::cout << v << ": " << dist[v] << std::endl;
        }
    }
    int max_index()
    {
        std::vector<int>::iterator iter = std::max_element(dist.begin(), dist.end());
        size_t index = std::distance(dist.begin(), iter);
        return static_cast<int>(index);
    }
    int max_node()
    {
        return *std::max_element(dist.begin(), dist.end());
    }
};

void BreadthFirstSearch::breadth_first_search(int i)
{
    dist.assign(n, -1);
    dist[i] = 0;
    que.push(i);
    while (!que.empty())
    {
        int v = que.front();
        que.pop();

        for (int nv : g[v])
        {
            if (dist[nv] != -1)
            {
                continue;
            }
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    Graph g(n);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        std::cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }
    BreadthFirstSearch bfs(n, g);
    bfs.breadth_first_search(0);
    int index = bfs.max_index();
    bfs.breadth_first_search(index);
    std::cout << bfs.max_node() + 1 << std::endl;
    return 0;
}