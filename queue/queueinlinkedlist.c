#include<stdio.h>
#include<conio.h>
int isempty(struct queue*front)
{
    if(front==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }

}
void enqueue(struct queue **front,struct queue **rear)
{
  struct queue *ptr=(struct queue*)(malloc(sizeof(struct queue*)));
  int item;
  printf("Enter the element ");
scanf("%d",&item);
int d=isempty(*front);
if(d==1){
  *front=ptr;
  *rear=ptr;

}else
{
    (*rear)->next=ptr;
    *rear=ptr;
}

}
void dequeue(struct queue **front,struct queue **rear)
{
    struct queue *ptr;
    int temp;
    temp=*front->info;
    ptr=*front;
if(*front==*rear)
{
    *front==NULL;
    *rear=NULL;
}
else{
    *front=ptr->next;
}
free(ptr);
printf("The element dequeued is %d",temp);
}
void peek(struct queue *front)
{
    int d= isempty(front);
    if(d==1)
    {
        printf("The queue is empty");
    }
    else{
        printf("The front element is %d",front->info);
    }
    }
    void main()
    {
        struct queue*front=NULL;
        struct queue*rear=NULL;
        while(1){
            clrscr();
            printf("THE OPTIONS AVAILABLE ARE ");

            printf("\n 1) ENQUE");
            printf("\n 2) DEQUE");
            printf("\n 3) PEEK ");
            printf("\n 4) Isempty");
            printf("\n Enter your choice ");
            int choice,d;
            scanf("%d",&choice);
            switch(choice){
                
                case 1: enqueue(&front,&rear);
                case 2: dequeue(&front,&rear);
                case 3: peek(front);
                case 4: isempty(front);
                if(d==1){
                    printf("Queue is empty ");
                }
                else{
                  printf("Queue is not empty ");
                }
                break;
            }
        getch();
        }
    }


