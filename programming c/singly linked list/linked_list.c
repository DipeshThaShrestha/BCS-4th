//program to implement linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
int main()
{
    struct node *ptr,*temp;
 
    int data;
    ptr = (struct node *)malloc(sizeof(struct node)); // create a node, assign its reference to ptr
    if(ptr==NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
        printf("\nEnter data: ");
        scanf("%d",&data);
        ptr->data=data;
        ptr->next=NULL;
        head=ptr;
    }
    printf("\nElements of list are:   ");
    temp=head;
    printf(" %d ",temp->data);
    return 0;
}
