#include<stdio.h>
#include<conio.h>
struct queue
{
    int front,rear;
    int elements[10];
    };
void createqueue(struct queue *q)
{
    q->front=-1;
    q->rear=-1;
}
int isempty(struct queue q)
{
    if(q.front==-1)
    {
        return 1;
    }
    else {
        return 0;
    }

}
int isfull(struct queue q)
{
    if( q.front==0&& q.rear==9)
    {
        return 1;
    }
        else{
            return 0;
        }
    
}
void enque(struct queue *q)
{
    int d= isfull(*q);
    if(d==1)
    {
        printf("The queue is full,no insertion can take place");
    }   
    else
    {
        int item;
        printf("\nEnter the number that you want to insert ");
        scanf("%d",&item);
        int s=isempty(*q);
        if(s==1)
        {
            q->front=0;
            q->rear=0;
        }
        else if(q->rear==9){
             for(int i=q->front;i<=q->rear;q++){
                q->elements[i-q->front]=q->elements[i];
                }
            q->rear=q->rear-q->front+1;
            q->front=0; 
          
}
    else 
    {
        q->rear++;
    }
    q->elements[q->rear]=item;
    }
}    
void deque(struct queue *q)
{
    int d=isempty(*q);
    if(d==1)
    {
        printf("The queue is laready full,cannot perform dequeue "); 
    }
    else{
        int temp;
        temp=q->elements[q->front];
        if(q->front==q->rear)
        {
            q->front==-1;
            q->rear==-1;

        }
        else{
            q->front++;
        }
        printf("The element dequed is %d ",temp);
        }
        }
    void peek( struct queue q)
    {
        int d=isempty(q);
        if(d==1)
        {
            printf("The array is empty so we cannot see");
        }
        else
        {
            printf("The element present at the front is %d ",q.elements[q.front]);
        }
    }
    
  void main()
  {
    struct queue q;
    createqueue(&q);
    while(1)
  {
 
  printf("\nOPTION AVAILABLE ARE :");
  printf("\n  1) ENQUE");
  printf("\n 2) Deque");
  printf("\n 3) is empty");
  printf("\n 4) is full");
  printf("\n 5) Peek");
  int choice;
  int d;
  printf("\nEnter your choice");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1: enque(&q);
  break;
    case 2: deque(&q);
    break;
    case 3: peek(q);
    break;
    case 4:d= isempty(q);
    if(d==1)
    {
        printf("the queue is empty");
    }
    else{
        printf("\nThe queue is not empty");
        
    }
   break;
    case 5:d= isfull(q);
    if(d==1)
    {
        printf("The qeue is full");
    }
    else{
        printf("The queue is not full");
    }
    break;


  }
  }
  getch();

}