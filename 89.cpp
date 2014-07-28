#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node * right;
};


struct node* newnode(int data)
{
    struct node* temp= (struct node*)(malloc(sizeof(struct node)));
    temp->data= data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void bstsum(struct node*root,int *sum)
{
    if(root==NULL)return;
    bstsum(root->right,sum);
    *sum=*sum+root->data;
    root->data=*sum;
  // printf("%d ",root->data);
    bstsum(root->left,sum);
}
void inorder(struct node*root)
{
    if(root==NULL)return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    return;
}
int main()
{
    struct node* root= newnode(4);
    root->left= newnode(2);
    root->right= newnode(6);
    root->left->left= newnode(1);
    root->left->right= newnode(3);
    root->right->left= newnode(5);
    root->right->right= newnode(7);
    inorder(root);
    printf("\n");
    int sum=0;
    bstsum(root,&sum);
     printf("\n");
    inorder(root);

    return 0;
}
