#include <stdio.h>
#include <stdlib.h>
void InsertNode(void);
void Traverse (void);
struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;
void InsertNode(void){
    struct node *ptr, *p;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter a number:\n");
    scanf("%d", &ptr->data);
    if(head==NULL){
        head=ptr;
        ptr->link=NULL;
    }
    else{
        p=head;
        ptr->link=p;
        head=ptr;
    }
}

void Traverse(void){
    struct node *np;
    np=head;
    if(head==NULL){
        printf("\nNo Nodes Available");
    }
    else{
       
        while(np!=NULL){
            printf("\t%d", np->data);
            np=np->link;
            
        }
    }
    free (head);
}

int main(int argc, char *argv[]){
    //Note! I've hardcoded the number of inputs but it can be dynamically set 
    for(int i=1;i<=4;i++){
        InsertNode();
    }

    printf("\n\nHeres the stracture of our Linked List");
    Traverse();
}

