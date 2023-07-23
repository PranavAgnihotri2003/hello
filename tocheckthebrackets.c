#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
char info;
struct stack *next;
};
int isempty(struct stack *top)
{
    if(top==NULL)
    
    {
        return 1;
    }
     
    else{
        return 0;
    }
    
}
void push(struct stack **top,char ch)
    {
        struct stack *ptr;
        ptr=(struct stack  *)(malloc(sizeof(struct stack)));
          ptr->info=ch;
          if(*top==NULL)
          {
            ptr->next=NULL;
          }
          else
          {
            ptr->next=*top;
          }
          *top=ptr;
    }
    void peek(struct stack *top)
    {
        if( *top==NULL)
        {
            printf("It is empty");
        }
        else{
            printf("Element at the top is: %c",top->info);
        }
    }
    void pop(struct stack **top)
    {
        if(*top==NULL)
        {
            printf("Empty");
        }
        else
        {
          struct stack *ptr;
          ptr=*top;
          *top=ptr->next;
          int item=ptr->info;
          free(ptr);
          printf("The element popped is: %c",item);
        }
    }
    int checkbrackets(char s[])
    { 
       struct stack *st=NULL;
        int balance=1;
        int i=0;
        int len=strlen(s);
        while(balance&&i<len)
        {
            char charpresent=s[i];
            i++;
            if (charpresent='{')
            {
                push(&st,'{');
            }
            else if(charpresent=='}')
            {
               if(!isempty(st))
               pop(&st);
               else
               {
                balance=0;
               }

            }
            
        }
        if ((balance&&isempty(&st)))
        {
            printf("The stack is empty");
        }
        else
        {
            printf("The stack is not empty");
        }
        

    }
    void main()
    {
        char p1[]="{a+{b*c+d-h}/k}";
        char p2[]="{a+b/c+d-h}*k}";
        printf("%s: ",p1);
        checkbrackets(p1)?printf("Equation is balanced"):printf("The equation is not balanced");
        checkbrackets(p2)?printf("Equation is balanced"):printf("the equation is not balanced");
            };
        
    

    
