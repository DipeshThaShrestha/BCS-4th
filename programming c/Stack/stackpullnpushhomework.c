#include<stdio.h>
#define N 5
int top=-1;
int arr[N];

void push(int);
void pop();
_Bool isFull();
_Bool isEmpty();
void peek();
void display();

void push(int num)
{
    if(isFull()==0)
    {
        top++;
        arr[top]=num;
    }
    else
        printf("\nstack is full\n");
}

void pop()
{
    if(isEmpty()==0)
    {
        top--;
    }
    else    
        printf("\nstack is empty\n");
}

void display()
{
    if(isEmpty()==0)
    {
        for(int i=0;i<=top;++i)
        {
            printf("%d \n",arr[i]);
        }
    }
    else
        printf("\nstack is empty \n");
}

void peek()
{
    if(isEmpty()==0)
        printf("%d \n",arr[top]);
    else
        printf("\nstack is empyt \n");
}

_Bool isFull()
{
    if(top==N-1)
        return 1;
    else
        return 0;
}

_Bool isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int main()
{
    int choice,num;
    while (1)
    {
        printf("\nEnter your choice\n1.push\n2.pop\n3.peek\n4.display\n5.Quit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("enter number to push\n");
            scanf("%d",&num);
            push(num);
            break;
        case 2: pop();
            break;
        case 3:peek();
            break;
        case 4: display();
            break;
        case 5: exit(0);
            break;
        default: 
            printf("please enter valid choice\n");
            break;
        }





    }
    
    



    return 0;
}
