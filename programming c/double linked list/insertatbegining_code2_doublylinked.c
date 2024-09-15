#include <stdio.h> 
#include <stdlib.h> 

struct node         //structure of doubly Node 
{
  int data;
  struct node *prev;
  struct node *next;
} *head, *last;

void list (int n)       //print list of nodes
{
  int i, data;
  struct node *new_node;
  if (n >= 1)
    {
      head = (struct node *) malloc (sizeof (struct node));
      printf ("Enter data of node 1 : ");
      scanf ("%d", &data);
      head->data = data;
      head->prev = NULL;
      head->next = NULL;
      last = head;
      for (i = 2; i <= n; i++) 
      { 
          new_node = (struct node *) malloc (sizeof (struct node)); 
          printf ("\nEnter data of node %d : ", i); 
          scanf ("%d", &data); 
          new_node->data = data;
	  new_node->prev = last;	// Now Link new node with the previous node
	  new_node->next = NULL;
	  last->next = new_node;	// Then Link previous node with the new node
	  last = new_node;	        // Let Make new node as last node
    }}
}

void print_List ()
{
  struct node *temp;
  int n = 1;
  if (head == NULL)
    {
      printf ("\nList is empty\n");
    }
  else
    {
      temp = head;
      printf ("The Doubly Linked List is :\n");
      while (temp != NULL)      // Print the list
	{
	  printf ("%d   ", temp->data);
	  n++;
	  temp = temp->next;        // Move the cur ptr to next node 
	}
    }
}
// Func to insert node at the beginning of the doubly linked list
void insert_Beginning (int data)
{
  struct node *new_node;
  if (head == NULL)
    {
      printf ("Please enter data for node \n");
    }
  else
    {
      new_node = (struct node *) malloc (sizeof (struct node));
      new_node->data = data;
      new_node->next = head;
      new_node->prev = NULL;
      head->prev = new_node;	// Link prev add field of head with new_node
      head = new_node;		// Make the new node as head node 
    }
}

int main ()
{
  int n, data, choice = 1;
  head = last = NULL;
  printf ("Enter the size of linked list : \n");	// Input the size of nodes
  scanf ("%d", &n);
  list (n);
  print_List ();
  printf ("\nEnter data for insert at the beginning :\n ");
  scanf ("%d", &data);
  insert_Beginning (data);
  print_List ();
  return 0;
}