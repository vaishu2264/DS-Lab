#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node*link;
};
struct node*start = NULL;
void createlist()
{
	if(start == NULL)
	{
		int n;
		printf("\nenter the number of node:");
		scanf("%d",&n);
		if(n!=0)
		{
			int data;
			struct node*newnode;
			struct node*temp;
			newnode = malloc(sizeof(struct node));
			start = newnode;
			temp = start;
			printf("\nenter number to be inserted: ");
			scanf("%d",&data);
			start->info=data;
			for(int i=2;i<=n;i++)
			{
				newnode = malloc(sizeof(struct node));
				temp->link = newnode;
				printf("\nenter number to be inserted:");
				scanf("%d",&data);
				newnode->info = data;
				temp = temp->link;
			}
	                printf("\nthe list is created\n");
		}
		else
	        {   
		        printf("\nthe list is already created\n");
	        }
	}	
}
void traverse()
{
	struct node*temp;
	if(start == NULL)
		printf("\nlist is empty\n");
	else
	{
		printf("\nThe created list is: \n");
		temp = start;
		while(temp!=NULL)
		{
			printf("%d\n",temp->info);
			temp = temp->link;
		}
	}
}
void insertatfront()
{
	int data;
	struct node*temp;
	temp = malloc(sizeof(struct node));
	printf("\nenter number to be inserted :");
	scanf("%d",&data);
	temp->info = data;
	temp->link = start;
	start = temp;
}
void insertatend()
{
	int data;
	struct node*temp,*head;
	temp = malloc(sizeof(struct node));
	printf("\nenter number to be inserted :");
	scanf("%d",&data);
	temp->link = 0;
	temp->info = data;
	head = start;
	while(head->link!=NULL)
	{
		head = head->link;
	}
	head->link = temp;
}
void insertatposition()
{
	struct node*temp,*newnode;
	int pos,data,i=1;
	newnode = malloc(sizeof(struct node));
	printf("\nenter position and data:");
	scanf("%d%d",&pos,&data);
	temp = start;
	newnode->info = data;
	newnode->link = 0;
	while(i<pos-1)
	{
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}
void deletefirst()
{
	struct node*temp;
        if(start == NULL)
                printf("\n list is empty\n");
        else	
        {
		temp = start;
		start = start->link;
		free(temp);
	}
}
void deleteend()
{
	struct node*temp,*prevnode;
	if(start == NULL)
		printf("\nlist is empty\n");
	else
	{
		temp = start;
		while(temp->link!=0)
		{
			prevnode = temp;
			temp = temp->link;
		}
		free(temp);
		prevnode->link = 0;
	}
}
void deleteposition()
{
	struct node*temp,*position;
	int i = 1,pos;
	if(start == NULL)
		printf("\nlist is empty");
	else
	{
		printf("\nenter index:");
		scanf("%d",&pos);
		position = malloc(sizeof(struct node));
		temp = start;
		while(i<=pos-1)
		{
			temp = temp->link;
			i++;
		}
		position = temp->link;
		temp->link = position->link;
		free(position);
	}
}
void main()
{
	int choice;
	while(1)
	{
		printf("\n1.To display list\n2.To insert at starting\n3.To insert at end\n4.To insert at any poition\n5.To delete first element\n6.To delete at end\n7.To delete at any position\n8.exit()\n");
		printf("enter choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				traverse();
				break;
			case 2:
				insertatfront();
				break;
			case 3:
				insertatend();
				break;
			case 4:
				insertatposition();
				break;
			case 5:
				deletefirst();
				break;
			case 6:
				deleteend();
				break;
			case 7:
				deleteposition();
				break;
			case 8:
				exit(1);
				break;
			default :
				printf("\nincorrect choice.");
		}
	}
}
	

