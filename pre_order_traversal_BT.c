#include <stdio.h>
#include <stdlib.h>

struct Bnode
{
    int data;
   struct Bnode *left, *right;
};


struct Bnode* CreateNode(int data)
{
    struct Bnode *ptr;
    ptr=(struct Bnode *) malloc(sizeof(struct Bnode));
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->data=data;
    return (ptr);
}

void PreTriversal(struct Bnode *ptr)
{
    if(ptr!=NULL)
    {
        printf("%d   ", ptr->data);
        PreTriversal(ptr->left);
        PreTriversal(ptr->right);
    }
}

int main(int argc, char *argv[])
{
    struct Bnode *ptr1, *ptr2, *ptr3, *ptr4, *ptr5;
    ptr1=CreateNode(10);
    ptr2=CreateNode(20);
    ptr3=CreateNode(30);
    ptr4=CreateNode(40);
    ptr5=CreateNode(50);
    
    //Link
    
    ptr1->left=ptr2;
    ptr1->right=ptr3;
    ptr2->left=ptr4;
    ptr2->right=ptr5;
    PreTriversal(ptr1);
}