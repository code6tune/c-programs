#include<stdio.h>
#include<conio.h>
#define INFINITY 9999
#define MAX 10
void dijkstra(int G[MAX][MAX],int n,int starnode);
int main()
{
int G[MAX][MAX],i,j,n,u;
printf("enter no of vertices");
scanf("%d",&n);
printf("\n enter the adjacency matrix :\n");
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
scanf("%d",&G[i][j]);
printf("\n enter the starting node:");
scanf("%d",&u);
dijkstra(G,n,u);
return 0;
}
void dijkstra(int G[MAX][MAX],int n,int startnode)
{
int cost [MAX][MAX],distance[MAX],pred[MAX];
int visited[MAX],coutn,mindistaance,nextnode,i,j;
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
if(G[i][j]==0)
cost[i][j]=INFINITY;
else
cost[i][j]=G[i][j];
//initialize pred[],distance[] and visited[]
for(i=0;i<=n;i++){
distance[i]=cost[startnode][i];
pred[i]=startnode;