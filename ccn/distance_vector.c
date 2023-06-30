#include<stdio.h>
struct node
{
unsigned int dist[20],form[20];
}rt[10];
int main()
{
int c[20][20];
int i, j, n,k, count = 0, s,d,arr[20];
printf("Enter the number of nodes : ");
scanf("%d",&n);
printf("Enter the cost matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&c[i][j]);
rt[i].dist[j]=c[i][j];
rt[i].form[j]=j;
}
}
printf("Enter the source : ");
scanf("%d",&s);
printf("Enter the destination : ");
scanf("%d",&d);
printf("The minimum cost from source to destination is : ");
printf("%d.",rt[s].dist[d]);
arr[0]=s;
i=1;
}
