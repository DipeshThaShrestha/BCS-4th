// program to implement singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert_at_begining()
{
    struct node *ptr;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
        printf("\nEnter element to insert: ");
        scanf("%d", &item);
        ptr->data=item;
        ptr->next=NULL;
        if(head!=NULL)
        {
        	ptr->next=head;
			head=ptr;	
		} 
		else{
		
        head=ptr; 
    	}
	}
}
void insert_at_pos()
{
    struct node *ptr;
    struct node *temp;    
    int item, i=1, pos;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
        printf("\nEnter element to be inserted: ");
        scanf("%d", &item);
        ptr->data=item;
        ptr->next=NULL;
        printf("\nEnter position to be inserted:");
        scanf("%d",&pos);
        while (i<pos-1)
        {
            temp= temp->next;
            i++;
        }
        ptr->next = temp->next;
        temp->next = ptr;        
    }
}
void insert_at_end()
{
	struct node *ptr;
    struct node *temp;    
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
        printf("\noverflow\n");
    }
	else
	{
		printf("\nEnter element to insert at last: ");
		scanf("%d", &item);
		ptr->data=item;
		ptr->next=NULL;
		temp=head;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
        ptr->next = NULL;
	}
}
void delete_from_begining()
{
   struct node *temp;
   struct node *ptr;
   if (head == NULL)
   {
      printf("\nUnderflow\n");
   }
   else
   {
      ptr = head;
      temp = ptr->next;
      head = temp;
      free(ptr);
      printf("\nFirst node deleted successfully\n");
   }
}
void delete_from_pos()
{
	struct node *ptr;
    struct node *temp;    
    int i=1, pos;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
    	printf("\nEnter the position: ");
    	scanf("%d", &pos);
    	temp = head;
        while(i<pos-1)
        {
            i++;
            temp = temp->next;
        }
        ptr = temp->next;
        temp->next = ptr->next;
        free(ptr);
        printf("\n Node deleted successfully\n");
    }
    
}
void delete_from_end()
{
    struct node *temp;
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        temp = head;
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        ptr = temp->next->next;
        temp->next = NULL;
        free(ptr);
        printf("\n Node deleted successfully\n");
    }
}
void display()
{
    struct node *temp;
    temp = head;
    printf("\nThe list contains following data:\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next; 
    }
}
void search()
{
    struct node *temp;
    int key;
    int i=1;
    if(head!=NULL)
    {
        printf("\nEnter the key to be searched: ");
        scanf("%d",&key);
        temp = head;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                printf("\n%d is found at pos: %d\n",key,i);
                break;
            }
            i++;
            temp = temp->next;    
        }
    }
    else
    {
        printf("\nlist is empty\n");
    }
 
}
int main()
{
    insert_at_begining();
    insert_at_pos();
    insert_at_pos();
    insert_at_end();
    display();
    search();
    delete_from_begining();
    delete_from_pos();
    delete_from_end();
    display();
}
