#include<stdio.h>
struct queue{
    int front,rear;
    int element[10]
};
void createqueue(struct queue *q)
{
    q->front==-1;
    q->rear==-1;
}
int isempty(struct queue q)
{
    if(q.front==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct queue q)
{
    if(q.front==0&&q.rear==9)
    {
        return 1;
    }
    else if((q.front==0&&q.rear==9)||(q.rear==q.front-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q)
{
    int d= isfull(*q);
    if(d==1){
        printf("The queue is full");
    }
    else
    {
        int item;
        printf("Enter the element ");
        scanf("%d",&item);

        int s=isempty(*q);
        if(s==1)
        {
            q->front=0;
            q->rear=0;
        }
        else if(q->front!= 0 && q->rear==9)
        {
            q->rear==0;
        }
        else
        {
            q->rear++;
        }

        q->element[q->rear]==item;    
        }
}
void dequeue(struct queue *q)
{
    int d= isempty(*q);
    if(d==1)
{
    printf("The queue is empty");
}
else
{
    int temp;
     temp=q->front;
     if(q->front==q->rear)
     {
        q->front=-1;
        q->rear=-1;

     }
     else if(q->front==9)
     {
        q->front==0;
     }
     else{
        q->front++;
     }
     printf("The element dequed is %d",temp);
}
}
void peek(struct queue q)
{
    int d=isempty(q);
    if(d==1)
   {
    printf("The queue is empty ");
   }
   else{
    printf("The element is %d",q.element[q.front]);
   }

}
void display(){
   struct  queue q;
    createqueue(&q);
    while(1);
    {
        printf("\nTHE OPTION AVAILABLE ARE ");
        printf("\n 1) Enqueue ");
        printf("\n 2) Dequeue ");
        printf("\n 3) Isfull ");
        printf("\n 4) Isempty ");
        int choice,d;
        printf("\n Enter you choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue(&q);
            break;
            case 2: dequeue(&q);
            break;
            case 3: peek(q);
            break;
            case 4: isempty(q);
            if(d==1)
            {
                printf("\nqueue is empty ");
            }
            else
            {
                printf("The queue is not empty");
            }
            break;
            case 5: isfull(q);
            if(d==1)
            {
                printf("queue is full ");
            }
            else{
                printf("Queue is not full ");
            }
            break;

        }

    }
}