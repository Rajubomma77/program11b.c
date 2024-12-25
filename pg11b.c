#include <stdio.h>

#define MAX 10

int a[MAX][MAX], visited[MAX];
int n; // Number of cities

void dfs(int source) {
    visited[source] = 1;
    printf("%d ", source);

    for (int v = 1; v <= n; v++) {
        if (a[source][v] == 1 && !visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    int source;

    printf("Enter the number of cities: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the source city (vertex): ");
    scanf("%d", &source);

    for (int i = 1; i <= n; i++) {
        visited[i] = 0;
    }

    printf("Nodes reachable from source vertex %d are: ", source);
    dfs(source);

    return 0;
}

