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
int totalnode(struct node*tree)
{
    if(tree==NULL)
    {
        return 0;
    }
    else
    {
        return(totalnode(tree->left)+totalnode(tree->right)+1);
    }
}
int internalnode(struct  node*tree)
{
    if((tree==NULL)||(tree->right==NULL&&tree->left==NULL))
    {
        return 0;
    }
    else{
        return(internalnode(tree->left)+internalnode(tree->right)+1);
    }
}
int externalnode(struct node*tree)
{
    if(tree==NULL)

    {
        return 0;
    }
    else if(tree->right==NULL && tree->left==NULL)
    {
        return 1;
    }
    else{
        return(externalnode(tree->left)+externalnode(tree->right));
    }
}
struct node * smallestnode(struct node*tree)
{
    if(tree==NULL||tree->left==NULL)
    {
        return tree;
    }
    else{
        return smallestnode(tree->left);
    }
}
struct node* search(struct node*tree,int value)
{
    if ((tree==NULL)||(tree->info=value))
        {
        return tree;
    }
    else if(value<tree->info)
    {
        return search(tree->left,value);
    }
    else{
        return search(tree->right,value);
}
    
}

void main()
{
    struct node*tree=NULL;
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);
    insert(&tree);
    int item;
    printf("Enter The element you want to search ");
     scanf("%d",&item);
     
     struct node* loc=search(tree,item);
     if(loc==NULL){
     printf("\nelement is not available ");
     }
     else{
        printf("\nElement   available ");
     }
     loc= smallestnode(tree);
     if(loc==NULL)
     {
        printf("\ntree is empty");
     }
     else{
        printf("\nThe smallest node is %d ",loc->info);
     }
 
}
