#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int info;
    struct node *next;
};
struct node *searchlist(struct node *head, int item)//1
{
    while ((head != NULL) && (head->info != item))
    {
        head = head->next;
    }
    return head;
}
void insertbeg(struct node **head)//2
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    int item;
    printf("\n Enter the node's value ");
    scanf("%d", &item);
    ptr->info = item;
    if (*head == NULL)
    {
        ptr->next = NULL;
    }
    else
    {
        ptr->next = *head;
    }
    *head = ptr;
}
void insertfater(struct node **head)//3
{
    struct node *loc;
    int item;
    printf("\n Enter the element after whuch node to be inserted ");
    scanf("%d", &item);
    if (loc == NULL)
    {
        printf("\n search element not found,cant insert ");
    }
    else
    {
        struct node *ptr;
        ptr = (struct node *)malloc(sizeof(struct node));
        int item;
        printf("Enter the node's value ");
        scanf("%d", &item);
        ptr->info = item;
        ptr->next = NULL;
        if (*head == NULL)
        {
            *head = ptr;
        }
        else
        {
            loc = *head;
            while (loc->next != NULL)
            {
                loc = loc->next;
            }
            loc->next = ptr;
        }
    }
}
void traverse(struct node *head)//4
{
    while (head != NULL)
    {
        printf("\n %d", head->info);
        head = head->next;
    }
}
void deletebegin(struct node **head)//5
{
    struct node *ptr;
    if (*head == NULL)
    {
        printf("\n Deletion cant be performed because list is empty ");
        return;
    }
    else
    {
        ptr = *head;
        *head = (*head)->next;
        free(ptr);
    }
}
void deleteend(struct node **head)//6
{
    struct node *ptr, *loc;
    if (*head == NULL)
    {
        return;
    }
    else if ((*head)->next == NULL)
    {
        ptr = *head;
        *head = NULL;
        free(ptr);
    }
    else
    {
        loc = *head;
        ptr = (*head)->next;
        while (ptr->next != NULL)
        {
            loc = ptr;
            ptr = ptr->next;
        }
        loc->next = NULL;
        free(ptr);
    }
}
void deleteafter(struct node **head)//7
{
    struct node *loc;
    int item;
    printf("\n Enter the elememt after which you want the node to be deleted ");
    scanf("%d", &item);
    loc = searchlist(*head, item);
    if (loc == NULL)
    {
        printf("\n Search element not found,cant delete ");
        return;
    }
    else
    {
        struct node *ptr;
        ptr = loc->next;
        loc->next = ptr->next;
        free(ptr);
    }
}
void deletelist(struct node **head)//8
{
    struct node*ptr;
    while((*head)!=NULL)
    {
        ptr=*head;
        *head=(*head)->next;
        free(ptr);
    }
}
void main()
{
    struct node*head=NULL;
    while(1)
    { 
        printf("AVAILABLE OPTIONS ARE ");
        printf("\nINSERT THE ELEMENT AT THE BEGINING");
        printf("\n INSERT AFTER A GIVEN ELEMENT ");
        printf("\n TRAVERSE");
        printf("\nDELETE AT THE BEGINING ");
        printf("\nDELETE AT THE END ");
        printf("\nDELETE AFTER A GIVE ELEMENT ");
        printf("\nDELETE THE WHOLE LIST ");

        switch(choice)
        {
            case 1:

        }


    }
}