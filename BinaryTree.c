#include <stdio.h>
#include <stdlib.h>
struct treenode
{
    int data;
    struct treenode *left, *right;
};

struct treenode* CreateTree(int data)
{
    struct treenode *ptr;
    ptr=(struct treenode*) malloc(sizeof(struct treenode));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return(ptr);
}
void PrintTree(struct treenode* Q)
{
    struct treenode *root;
    root=Q;
    printf("%d\n", root->data);
    root=root->left;
    while(root!=NULL)
    {
        
        printf("%d   ",root->data);
        root=root->left;
    }
    root=Q->right;
    while(root!=NULL)
    {
        printf("%d   ", root->data);
        root=root->right;
    }
}
int main(int argc, char *argv[])
{
    struct treenode *p1, *p2, *p3, *p4, *p5;
    p1=CreateTree(10);//root node
    p2=CreateTree(20);
    p3=CreateTree(30);
    p4=CreateTree(40);
    p5=CreateTree(50);
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    PrintTree(p1);
}