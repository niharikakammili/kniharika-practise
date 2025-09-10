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
int main()
{

struct node*head=NULL;
struct node*node1=createnode(10);
head=node1;
struct node*node2=createnode(20);
struct node*node3=createnode(30);
node1 ->next=node2;
node2 ->next=node3;
struct node*temp=head;
while(temp!=NULL)
{
	printf("%d ->",temp ->data);
	temp=temp ->next;
}
}

