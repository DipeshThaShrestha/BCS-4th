#include<stdio.h>
#define SIZE 10
void push(int arr[], int elem);
void pop(int arr[]);
void display(int arr[]);
int peek(int arr[]);
int top=-1;

int main()
{
    int a[SIZE],item,choice;
    char ch='y';
    do{
        printf("\n press 1::push 2::pop 3::peek 4::display\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: 
				printf("Enter element to be pushed on the stack: ");
                scanf("%d",&item);
                push(a,item);
                break;
            case 2: 
				pop(a);
				break;
			case 3:
				item = peek(a);
				if(item != -1)
				printf("\n The value stored at top of stack is: %d", item);
				break;	
			case 4:
				display(a);
				break;
				
            	default: printf("\n invalid choice\n");
        }
        getchar();
        printf("\n Do you want to continue(y/n)");
        scanf("%c",&ch);
        }
		while(ch=='y');
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
	void display(int arr[])
	{
		int i;
		if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is..\n");
		for(i=top;i>=0;--i)
		printf("%d\n",arr[i]);
	}
}
	int peek(int arr[])
	{
		if(top == -1)
	{
		printf("\n STACK IS EMPTY");
		return -1;
	}	
	else
		return (arr[top]);
	}
