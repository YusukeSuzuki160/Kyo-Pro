#include <iostream>
#include <string>
#include <vector>
#include <queue>

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
        dist[0] = 0;
        que.push(0);
    }
    void breadth_first_search();
    void print_distance()
    {
        for (int v = 0; v < n; v++)
        {
            std::cout << v << ": " << dist[v] << std::endl;
        }
    }
};

void BreadthFirstSearch::breadth_first_search()
{
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
    BreadthFirstSearch bfs(n, g);
    bfs.breadth_first_search();
    bfs.print_distance();
}