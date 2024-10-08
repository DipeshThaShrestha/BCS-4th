// array implementation of queue
#include<stdio.h>
#define SIZE 10
int front=-1,rear=-1;
void dequeue(int q[]);
void enqueue(int a[]);
void display(int a[]);
int main()
{
    int arr[SIZE],ch;
    char choice='y';
    while(choice=='y')
    {
        printf("\n press 1::enqueue 2::dequeue 3::display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue(arr);break;
            case 2: dequeue(arr);break;
            case 3: display(arr);break;
            default: printf("\nInvalid operation\n");break;
        }
        getchar();
        printf("\ndo you want to continue(y/n)");
        scanf("%c",&choice);
    }
    return 0;
}
void enqueue(int a[])
{
    int elem;
    if(rear==SIZE-1)
    {
        printf("\nqueue overflow\n");
    }
    else
    {
        printf("\nEnter element to be inserted into queue:\n");
        scanf("%d",&elem);
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        a[rear]=elem;
    }
}
void dequeue(int q[])
{
    int elem;
    if(front==-1 || front>rear)
    {
        printf("\nunderflow\n");
    }
    else
    {
        elem = q[front];
        printf("\n%d is deleted from the queue\n",elem);
        front++;
    }
}
void display(int q[])
{
    int i;
    if(front==-1)
    {
        printf("\nqueue is empty\n");
    }
    else
    {
       printf("\nFollowing are the elements of queue: \n");
       for(i=front;i<=rear;i++)
       {
           printf("%d\t",q[i]);
       }
    }
}