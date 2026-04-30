/*
5. Take an example subnet of hosts and obtain a broadcast tree for the subnet.
*/

#include <stdio.h>

#define MAX 10

int visited[MAX];

void dfs(int graph[MAX][MAX], int n, int node) {
    printf("%d ", node);
    visited[node] = 1;

    for (int i = 0; i < n; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            dfs(graph, n, i);
        }
    }
}

int main() {
    int n, graph[MAX][MAX];

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Broadcast Tree (DFS Traversal): ");
    dfs(graph, n, 0);

    return 0;
}
