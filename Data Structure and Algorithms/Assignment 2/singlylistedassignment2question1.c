// implementation of queue using linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL, *rear=NULL;
void enqueue()
{
	struct node *ptr,*temp;
	int data;
	ptr = (struct node*)malloc (sizeof(struct node));
	if (ptr==NULL)
	{
		printf("\noverflow\n");
	}
	else
	{
		printf("\nEnter the data to be inserted into Q:\n");
		scanf("%d", &data);
		ptr->data = data;
		ptr->next = NULL;
		if (front==NULL && rear==NULL)
		{
			front=ptr;
			rear=ptr;
		}
		else
		{
			temp=rear;
			temp->next = ptr;
			rear = ptr;
		}
	}
}
void dequeue()
{
	struct node *temp;
	if (front==NULL)
	{
		printf("\nQueue is empty:underflow\n");
	}
	else
	{
		if (front!=rear)
		{
			temp = front;
			front = temp->next;
			free(temp);
		}
		else
		{
			temp = front;
			front = NULL;
			rear = NULL;
			free (temp);
		}
	}
}

void display()
{
	struct node *temp;
	if (front==NULL && rear==NULL)
	{
		printf("\nQueue is empty\n");
	}
	else
	{
		temp = front;
		printf("\nThe queue contains following elements:\n");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp = temp->next;
		}
	}
}
void main()
{
	int choice;
	char ch='y';
	while(ch=='y')
	{
		printf("\nCHOOSE 1:Enqueue 2:Dequeue 3:Display\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("\nInvalid Choice\n");
				break;			
		}
		getchar();
        printf("\ndo you want to continue(y/n)");
        scanf("%c",&ch);
	}

}
