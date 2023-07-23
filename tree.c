#include<stdio.h>
#include<stdlib.h>
struct node{
     struct node*left;
   struct  node*right;
   int info;

};
void insert(struct node **tree)
{
    struct node*ptr=(struct node*)(malloc(sizeof(struct node)));
    printf("Enter the element you want to insert ");
    int item;
    scanf("%d",&item);
    ptr->info=item;
    ptr->right= NULL;
    ptr->left=NULL;
    if(*tree==NULL)
    {
        *tree=ptr;
    }
    else{
        struct node *parent=NULL;
        struct node *loc=*tree;
        while(loc!=NULL)
        {
            parent=loc;
            if(item< loc->info)
            {
                loc =loc->left;

            }
            else
            {
                loc=loc->right;

            }
        }
if(item<parent ->info)
{
    parent->left=ptr;
}
else{
    parent->right=ptr;
}
        }

             
    }
void preorder(struct node *tree)
{
    if(tree!=NULL)
    {
        printf(" %d ",tree->info);
        preorder(tree->left);
        preorder(tree->right);
    }
   
}
void inorder(struct node *tree)
{
    if (tree!=NULL)
   {
    
    inorder(tree->left);
    printf(" %d ",tree->info);
    inorder(tree->right);
   }
   }
void postorder(struct node *tree)
{
    if (tree!=NULL)
{
    postorder(tree->left);
    postorder(tree->right);
    printf(" %d ",tree->info);
}
}
void main()
{
    
    struct node *tree= NULL;
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);


    preorder(tree);
    printf("\n");
     inorder(tree);
    printf("\n");
    postorder(tree);
}