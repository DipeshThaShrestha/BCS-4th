#include<stdio.h>
#define SIZE 10
int top=-1;
int main()
{
    int a[SIZE,item];
    printf("Enter a elemrnt to be pushed on the stack");
    scanf("%d",&item);
    push(a,item);
    return 0;

}

void push(int arr[],int elem)
{
    if(top==SIZE-1)
    {
        printf("\n stack overfloe");
    }
    else{
        top++;
        arr[top]=elem;
    }
}