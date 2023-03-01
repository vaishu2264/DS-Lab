#include<stdio.h>
#include<stdlib.h>

struct node			
{
  int data;
  struct node *next;
};

void display (struct node *head)	
{
  if (head == NULL)
    return; 
  display (head->next); 
  printf ("%d  ", head->data);
}


int main ()
{
  struct node *prev, *head, *p;
  int n, i;
  printf ("Enter size of Linked List: ");
  scanf ("%d", &n);
  head = NULL;
  for (i = 0; i < n; i++)
    {
      p = malloc (sizeof (struct node));
      printf ("Enter the data: ");
      scanf ("%d", &p->data);
      p->next = NULL;
      if (head == NULL)
	head = p;
      else
	prev->next = p;
      prev = p;
    }
  printf("reverse order of entered list is:\n ");
  display (head);
  return 0;
}
