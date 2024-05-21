//wap tp create an grPH WITH N VERTEX AND ADD THREE EDGES INFORMATION AND DISPLAY THE GRAPH.
#include<stdio.h>
#include<stdlib.h>
void createGraph(int n,int graph[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;i<n;j++){
            graph[i][j]=0;
        }
    }
}
void addEdge(int sou,int des,int n,int graph[n][n]){
    graph[sou][des]=1;
}
//void display(int n)