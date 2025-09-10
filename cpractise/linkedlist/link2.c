#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*createnode(int data)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode ->data=data;
	newnode ->next=NULL;
	return newnode;
}
void insertatend(struct node**head,int data)
{
	struct node*newnode=createnode(data);
	struct node*current=*head;
	while(current ->next!=NULL)
	{
		current=current ->next;
	}
	current ->next=newnode;
}
int main()
{
	struct node*head=NULL;
	head=createnode(10);
	insertatend(&head,20);
	insertatend(&head,30);
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("%d ->",temp ->data);
		temp=temp ->next;
	}
}

