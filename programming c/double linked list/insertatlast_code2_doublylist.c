#include <stdio.h>
#include <stdlib.h>

struct node			//structure of doubly Node 
{
  int data;
  struct node *prev;
  struct node *next;
} *head, *last;

void insert_End (int data)      // Function to insert node at the beginning of the doubly linked list
{
  struct node *new_node;
  if (last == NULL)
    {
      printf ("Please enter data for node \n");
    }
  else
    {
      new_node = (struct node *) malloc (sizeof (struct node));
      new_node->data = data;
      new_node->next = NULL;
      new_node->prev = last;
      last->next = new_node;
      last = new_node;		// Make the new node as last node 
    }
}

void list (int n)			//print list of nodes
{
  int i, data;
  struct node *new_node;
  if (n >= 1)
    {
      head = (struct node *) malloc (sizeof (struct node));
      printf ("Enter data for node1 : ");
      scanf ("%d", &data);
      head->data = data;
      head->prev = NULL;
      head->next = NULL;
      last = head;
      for (i = 2; i <= n; i++)
	{
	  new_node = (struct node *) malloc (sizeof (struct node));
	  printf ("Enter data of node %d: ", i);
	  scanf ("%d", &data);
	  new_node->data = data;
	  new_node->prev = last;	// Now Link new node with the previous node
	  new_node->next = NULL;
	  last->next = new_node;	// Then Link previous node with the new node
	  last = new_node;      	// Let Make new node as last node
    }
    }
}

void print_List ()
{
  struct node *extra;
  int n = 1;
  if (head == NULL)
    {
      printf ("\nList is empty\n");
    }
  else
    {
      extra = head;
      printf ("The doubly Linked List is here :\n");
      while (extra != NULL)	// Print the list
	{
	  printf ("%d   ", extra->data);
	  n++;
	  extra = extra->next;	// Move the current pointer to next node 
	}
    }
}

int main ()
{
  int n, data;
  head = last = NULL;
  printf ("Enter the size of linked list : \n");	// Input the size of nodes
  scanf ("%d", &n);
  list (n);
  print_List ();
  printf ("\nEnter data for insertion at the end of the list :\n ");
  scanf ("%d", &data);
  insert_End (data);
  print_List ();
  return 0;
}