#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adjList(10005);

void BFS(int a, int size)
{
    vector<int> dist(size, -1);
    queue<int> q;
    q.push(a);
    dist[a] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto &b : adjList[u])
        {
            if (dist[b] == -1)
            {
                dist[b] = dist[u] + 1;
                q.push(b);
            }
        }
    }
}
int main()
{

    return 0;
}