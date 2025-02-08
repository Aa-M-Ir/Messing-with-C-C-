#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int capacity;
    int front, back;
    int *arr;
};
struct Queue* CreateQueue(int cap)
{
    struct Queue *ptr;
    ptr=(struct Queue*)malloc(sizeof(struct Queue));
    ptr->capacity=cap;
    ptr->front=-1;
    ptr->back=-1;
    ptr->arr=(int *)malloc(sizeof(int)*ptr->capacity);
    return (ptr);
}

void enQueue(struct Queue *ptr, int data)
{
    if(ptr->back==ptr->capacity-1)
    {
        printf("Queue is full");
    }
    else
    {
        ptr->back++;
        ptr->arr[ptr->back]=data;
    }
}

int deQueue(struct Queue *ptr)
{
    int data;
    if(ptr->front==ptr->back)
    {
        printf("\nQueue is empty!");
    }
    else
    {
        ptr->front++;
        data=ptr->arr[ptr->front];
    }
    return(data);
}
int main()
{
    int i, num[4], info[3];
    struct Queue *Q;
    Q=CreateQueue(3);
  
    
    for(i=1; i<=3; i++)
    {
        printf("Enter a number:");
        scanf("%d", &num[i]);
        enQueue(Q, num[i]);
    }
    for(i=1; i<=3; i++)
    {
        info[i]=deQueue(Q);
        printf("%d  ", info[i]);
    }
    
}