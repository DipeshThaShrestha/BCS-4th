#include<stdio.h>
#define SIZE 10
void push(int arr[], int elem);
void pop(int arr[]);
int top=-1;
 
int main()
{
    int a[SIZE],item,choice;
    char ch='y';
    do{
        printf("\n press 1:: push 2:: pop\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter element to be pushed on the stack: ");
                   scanf("%d",&item);
                   push(a,item);
                   break;
            case 2: pop(a);break;
            default: printf("\n invalid choice\n");
        }
        getchar();
        printf("\ndo you want to continue(y/n)");
        scanf("%c",&ch);

    }while(ch=='y');


 
    push(a,item);
    pop(a);
    return 0;
}
 
void push(int arr[], int elem)
{
    if(top==SIZE-1)
    {
        printf("\n stack overflow\n");
    }
    else
    {
        top++;
        arr[top] = elem;
    }
}
 
void pop(int arr[])
{
    if(top==-1)
    {
        printf("\n stack underflow\n");
    }
    else
    {
        printf("\n %d is to be deleted\n",arr[top]);
        top--;
    }
}
