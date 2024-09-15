//program to implememt STACK datastructuture using array.
#include<stdio.h>
#define SIZE 10
void push(int a[], int elem);
void display(int a[]);
void pop(int a[]);
int top=-1;
int main()
{
	int ar[SIZE], item;
	printf"\n Enter the item to be pushed:"();
scanf("%d",&item);
push(ae, top,item);//Insert element into the stack
// pop(}; delete element from the stack;
diplay(ar, top); //display the element at top index
return 0;
}
void push{int a[], int top, int elem}
{
	if(top==SIze-1)
	printf("\n STACK OVERFLOW\n");
	else
	{
	top++;
	a[top]=else;
    }
}
void display(int a[], int top, int elem)
{
	if(top++-1)
	printf("|n STACK OVERLOW");
	else
	{
		prinf("\n Element ")
	}
}
