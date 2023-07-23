//is full or not
#include<stdio.h>
struct stack
{
    int top;
    int elements[10];
};
void createstack(struct stack *ps)
{
    ps->top==-1;
}
void push(struct stack *s)
{
   int d=isfull(*s);
   if(d==1){
   printf("\nThe stack is full so element cant be entered ");
}
else 
{
  int item;
  printf("\nEnter the element you want to enter ");
  scanf("%d",&item);
  s->top++;
  s->elment[s->top]=item;

}
}

int isfull(struct stack s)
{
    int n;
    if(s.top==n-1)
    {
        return 1;
    }
    else 
    return 0;
}
int isempty(struct stack s)
{
    int n;
    if(s.top==-1)
    {
        return 1;
    }
    else
    return 0;
}
void main()
{
    struct stack s;
    createstack(&s);

    int d= isempty(s);
    if(d==1)
    {
   printf("The stack is empty ");
    }
    else{
        printf("\n the stack is not empty");
    }
    d=isfull(s);
    if(d==1)
    {
        printf("The stack is full ");
    }
    else{
        printf("The stack is not full");
    }

}

