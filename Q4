/*
4. Implement Dijkstra’s algorithm to compute the shortest path through a network.
*/

#include <stdio.h>

#define MAX 10
#define INF 999

int main() {
    int n, cost[MAX][MAX], dist[MAX], visited[MAX];
    int i, j, min, next, source;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }

    printf("Enter source node: ");
    scanf("%d", &source);

    for (i = 0; i < n; i++) {
        dist[i] = cost[source][i];
        visited[i] = 0;
    }

    dist[source] = 0;
    visited[source] = 1;

    for (i = 1; i < n; i++) {
        min = INF;

        for (j = 0; j < n; j++)
            if (!visited[j] && dist[j] < min) {
                min = dist[j];
                next = j;
            }

        visited[next] = 1;

        for (j = 0; j < n; j++)
            if (!visited[j] && min + cost[next][j] < dist[j])
                dist[j] = min + cost[next][j];
    }

    printf("Shortest distances:\n");
    for (i = 0; i < n; i++)
        printf("%d -> %d = %d\n", source, i, dist[i]);

    return 0;
}
