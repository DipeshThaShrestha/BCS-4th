//program to implement singly linked list
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
    if(ptr==NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
        printf("\nEnter element to insert: ");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=NULL;
        if(head!=NULL)
        {
            ptr->next=head;
            head=ptr;
        }
        else
        {
            head=ptr;
        }
       
    }
}
void insert_at_pos()
{
    struct node *ptr;
    struct node *temp;
    int item,pos,i=1;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
        printf("\nEnter element to be inserted: ");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=NULL;
        printf("\nEnter position to be inserted: ");
        scanf("%d",&pos);
        temp = head;
        while(i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        ptr->next = temp->next;
        temp->next = ptr;
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
int main()
{
    insert_at_begining();
    insert_at_pos();
    insert_at_begining();
    display();
}