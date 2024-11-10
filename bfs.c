#include<stdio.h>
int n,q[10],arr[10][10],item,visited[10],front=-1,rear=-1;
void mat(){
    int i,j;
    printf("Enter the number of verteces \t");
    scanf("%d",&n);
    printf("Enter adjacency matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void enq(int item){
    if(front = rear = -1){
        front=rear=0;
    }
    else{
        rear++;
    }
    q[rear]=item;
}
int dq(){
    if(front==rear){
        item=q[front];
        front=rear=-1;
    }else{
        item=q[front];
        front++;
    }
    return item;
}
void bfs(int v){
    int i;
    printf("vertices that can be reached are \t ");
    printf("%d\t",v);
    visited[v]=1;
    enq(v);
    while(front != -1){
        v=dq();
        for(i=1;i<=n;i++){
            if(arr[v][i]&&!visited[i]){
                enq(i);
                visited[i]=1;
                printf("%d\t",i);
            }
        }
    }
}
void main(){
    int s;
    for(i=0;i<n;i++){
        visited[i]=0;
    }
    mat();
    printf("\n Enter start node");
    scanf("%d",&s);
    bfs(s);
}