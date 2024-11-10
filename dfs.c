#include<stdio.h>
int matrix[10][10],visited[10],n;
void mat(){
    int i,j;
    printf("Enter the number of vertices: ");
    scanf("%d",&n);
    printf("\n Enter adjacency matrix\n");
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
                    scanf("%d",&matrix[i][j]);
        }
    }
}
void bfs(int v){
    int i;
    printf("%d\t" ,v);
    visited[v]=1;
    for(i=0;i<n;i++){
        if(matrix[v][i]&&!visited[i]){
            bfs(i);
        }
    }
}
void main(){
    int s;
    mat();
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    printf("Enter the starting vertex: ");
    scanf("%d",&s);
    printf("\nVertex which can be reached are :")
    bfs(s);
}