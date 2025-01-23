#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 100
int minDistance(int dist[], int sptSet[], int n) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < n; v++) {
        if (sptSet[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void printPath(int parent[], int j) {
    if (parent[j] == -1)
        return;
    printPath(parent, parent[j]);
    printf("%d ", j);
}

void printSolution(int dist[], int parent[], int n, int src, int dest) {
    printf("Shortest path from %d to %d is: %d ", src, dest, src);
    printPath(parent, dest);
    printf("\nShortest distance: %d\n", dist[dest]);
}

void dijkstra(int graph[MAX_NODES][MAX_NODES], int n, int src, int dest) {
    int dist[n], sptSet[n], parent[n];
    for (int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
        parent[i] = -1;
    }
    dist[src] = 0;
    for (int count = 0; count < n - 1; count++) {
        int u = minDistance(dist, sptSet, n);
        sptSet[u] = 1;
        for (int v = 0; v < n; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }
    printSolution(dist, parent, n, src, dest);
}

int main() {
    int n, src, dest;
    int graph[MAX_NODES][MAX_NODES];
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    }
    printf("Enter the source node: ");
    scanf("%d", &src);
    printf("Enter the destination node: ");
    scanf("%d", &dest);
    dijkstra(graph, n, src, dest);
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(n^2)