#include<stdio.h>

void bfs(int adjMat[10][10], int n, int source) {
    int visited[10], adjVer, queue[10], rear = -1, front = 0, curVer;
    
    for (adjVer = 0; adjVer < n; adjVer++) {
        visited[adjVer] = 0;
    }

    queue[++rear] = source;   // ++rear increases rear first, then uses it
    visited[source] = 1;

    while (rear >= front) {
        curVer = queue[front++];
        
        for (adjVer = 0; adjVer < n; adjVer++) {
            if (adjMat[curVer][adjVer] == 1 && visited[adjVer] == 0) {
                queue[++rear] = adjVer;
                printf("The BFS traversal is: %d %d\n", curVer, adjVer);
                visited[adjVer] = 1;
            }
        }
    }
}

int main() {
    int n;
    int adjMat[10][10];
    int source;

    printf("Enter the number of vertices in the graph:\n");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adjMat[i][j]);
        }
    }

    printf("Enter the source vertex:\n");
    scanf("%d", &source);

    bfs(adjMat, n, source);

    return 0;
}
