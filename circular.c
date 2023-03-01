#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head;
void beginsert();
void lastinsert();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main(){
int choice=0;
printf("1.Insert beginning 2.Insert last 3.Delete Beginning 4.Delete Last 5.Search 6.Show 7.Exit\n");
while(choice!=7){
printf("Enter choice: ");
scanf("%d",&choice);
switch(choice){
case 1:
beginsert();
break;
case 2:
lastinsert();
break;
case 3:
begin_delete();
break;
case 4:
last_delete();
break;
case 5:
search();
break;
case 6:
display();
break;
case 7:
exit(0);
break;
default :
printf("Enter valid choice\n");
}
}
}
void beginsert(){
struct node *ptr,*temp;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL){
printf("Overflow\n");
}
else {
printf("Enter node data: ");
scanf("%d",&item);
ptr->data=item;
if(head==NULL){
head=ptr;
ptr->next=head;
}
else {
temp=head;
while(temp->next!=head){
temp=temp->next;
}
ptr->next=head;
temp->next=ptr;
head=ptr;
}
}
printf("Node inserted\n");
}
void lastinsert(){
struct node *ptr,*temp;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
        if(ptr==NULL){
                printf("Overflow\n");
        }
        else {
                printf("Enter node data: ");
                scanf("%d",&item);
                ptr->data=item;
                if(head==NULL){
                        head=ptr;
                        ptr->next=head;
                }
                else {
                        temp=head;
                        while(temp->next!=head){
                                temp=temp->next;
                        }
                        temp->next=ptr;
ptr->next=head;
                }
        }
        printf("Node inserted\n");
}
void begin_delete() {
struct node *ptr;
if(head==NULL){
printf("Underflow\n");
}
else if(head->next==head){
head=NULL;
free(head);
printf("Node deleted\n");
}
else {
ptr=head;
while(ptr->next!=head){
ptr=ptr->next;
}
ptr->next=head->next;
free(head);
head=ptr->next;
printf("Node deleted\n");
}
}
void last_delete() {
        struct node *ptr,*preptr;
        if(head==NULL){
                printf("Underflow\n");
        }
        else if(head->next==head){
                head=NULL;
                free(head);
                printf("Node deleted\n");
        }
        else {
                ptr=head;
                while(ptr->next!=head){
                        preptr=ptr;
ptr=ptr->next;
                }
                preptr->next=ptr->next;
                free(ptr);
                printf("Node deleted\n");
        }
}
void search() {
struct node *ptr;
int item,i=0,flag=1;
ptr=head;
if(ptr==NULL){
printf("Empty list\n");
}
else {
printf("Enter element to search: ");
scanf("%d",&item);
if(head->data==item){
printf("Item found at %d\n",i+1);
flag=0;
}
else {
flag=1;
}
i++;
ptr=ptr->next;
}
if(flag!=0){
printf("Item not found\n");
}
}
void display() {
struct node *ptr;
ptr=head;
if(head==NULL){
printf("Nothing to print\n");
}
else {
printf("Values: ");
while(ptr->next!=head){
printf("%d",ptr->data);
ptr=ptr->next;
}
printf("%d",ptr->data);
}
}
