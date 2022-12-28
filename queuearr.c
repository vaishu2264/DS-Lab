#include <stdio.h>
#include <stdlib.h>
void insert();
void delete();
void display();
int front = -1,rear = -1;
int queue[100];
void main()
{
	int choice;
	while(choice != 4)
	{
		printf("\n1.Insert an element.\n2.Delete.\n3.display the queue.");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("Your choice is invalid.Enter number from 1-4");
	}
	}
}
void insert()
{
	int item;
	printf("\nEnter the element\n");
	scanf("\n%d",&item);
	if(rear == 99)
	{
		printf("\nOver flow\n");
	}
	if(front == -1 && rear == -1)
	{
		front = 0;
	        rear = 0;
	}
	else
	{
		rear = rear + 1;
	}
	queue[rear] = item;
	printf("\nValue inserted\n");
}
void delete()
{
	int item;
	if(front == -1 || front > rear)
	{
		printf("\nUnder flow\n");
	}
	else
	{
		item = queue[front];
	        if(front == rear)
		{
			front = -1;
		        rear = -1;
		}
		else
		{
			front = front + 1;
		}
	        printf("\nValue deleted.\n");
	}
}
void display()
{
	int i;
	if(rear == -1)
	{
		printf("\nEmpty queue\n");
	}
	else
	{
		printf("\nprinting values....\n");
	        for(i = front;i<=rear;i++)
		{
			printf("\n%d\n",queue[i]);
		}
	}
}



