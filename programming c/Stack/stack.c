//stack implementaion using c
#include<stdio.h>
int main()
{
    int a[10],top=-1,num; //empty stack is initialized
    printf("enter a number to insert:");
    scanf("%d",&num);
    top++; //0
    a[top]=num;
    printf("\nElement ata top of stack is:%d\n",a[top]);

    printf("enter a number to insert:");
    scanf("%d",&num);
    top++; //0
    a[top]=num;
    printf("\nElement ata top of stack is:%d\n",a[top]);
}