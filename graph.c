#include<stdio.h>
#include<stdlib.h>
struct gnode
{
    int vertex;
    struct gnode *next;
};
void input(struct gnode *adj[])

{
    struct gnode *ptr,*last;
    int i,j,m,val;
    for(i=0;i<5;i++)
    {
        last =NULL;
         printf("Enter the number of nodes for %d ",i);
         scanf("%d",&m);
  
  for ( j= 0; j < m; j++)
  {
     printf("Enter the node number %d ",j);
     scanf("%d",&val);
     ptr=(struct gnode*)(malloc(sizeof(struct gnode)));
     ptr->vertex=val;
     ptr->next=NULL;
     if (adj[i]==NULL)
     {
        adj[i]=ptr;
        last=ptr;

     }
     else
     {
        last->next=ptr;
        last=ptr;
     }
     }

     }
  }
  
void main()
{
   struct gnode*adj[5];
   int i;
   for(int i=0;i<5;i++)
   {
    adj[i]=NULL;
   }
   input(adj);
}