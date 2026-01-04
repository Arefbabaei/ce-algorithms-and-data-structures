#include <iostream>
#include <vector>
#include <queue>

void dfs(int node, std::vector<std::vector<int>>& g, std::vector<bool>& visited) {
    visited[node] = true;
    std::cout << node << " ";
    for (int nei : g[node]) {
        if (!visited[nei]) dfs(nei, g, visited);
    }
}

void bfs(int start, std::vector<std::vector<int>>& g) {
    std::vector<bool> visited(g.size(), false);
    std::queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front(); q.pop();
        std::cout << node << " ";
        for (int nei : g[node]) {
            if (!visited[nei]) {
                visited[nei] = true;
                q.push(nei);
            }
        }
    }
}

int main() {
    int n = 6;
    std::vector<std::vector<int>> g(n);
    g[0] = {1, 2};
    g[1] = {3};
    g[2] = {4, 5};

    std::cout << "DFS from 0: ";
    std::vector<bool> visited(n, false);
    dfs(0, g, visited);
    std::cout << "\n";

    std::cout << "BFS from 0: ";
    bfs(0, g);
    std::cout << "\n";

    return 0;
}