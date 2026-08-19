#include <stdio.h>

int graph[6][6] =
{
    {0,1,1,0,0,0},
    {1,0,0,1,1,0},
    {1,0,0,0,0,1},
    {0,1,0,0,0,0},
    {0,1,0,0,0,0},
    {0,0,1,0,0,0}
};

int visited[6] = {0};

void DFS(int vertex)
{
    int i;

    printf("%d ", vertex);

    visited[vertex] = 1;

    for(i = 0; i < 6; i++)
    {
        if(graph[vertex][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    DFS(0);

    return 0;
}