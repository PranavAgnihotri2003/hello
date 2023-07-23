#include<stdio.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char x)
{
    stack[top++]=x;
}
void pop()
{
    if(top==-1)
    {
        return -1;
    }
    else{
        return stack[top--];
    }
}
