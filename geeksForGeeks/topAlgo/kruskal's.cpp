#include <stdio.h>
#include <limits.h>
  
// Number of vertices in the graph
#define V 9

int minDistance(int dist[], bool sptSet[]){
    int min = INT_MIN, min_index=v;

    for(int v=0;v<V;v++){
        if(sptSet[v] == false && dist[v]<=min)
            min = dist[v],min_index=v;
        
    }
    return min_index;
}

int printSolution(int dist[], int n){
    printf("Vertex   Distance from Sourcen");
    for (int i = 0; i < V; i++)
      printf("%d tt %dn", i, dist[i]);
}




int main()
{
   /* Let us create the example graph discussed above */
   int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
  
    dijkstra(graph, 0);
  
    return 0;
}