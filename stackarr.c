#include<stdio.h>
int stack[100],choice,n,top=-1,x,i;
void push();
void pop();
void display();
int main()
{
    
    printf("\n Enter the size of stack:");
    scanf("%d",&n);
    printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3)");
		break;
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\n Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
	    if(top>-1)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
