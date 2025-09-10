#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list * next;
};
struct list*head=NULL,*tail=NULL;
struct list* temp;
struct list*create_node(int n)
{
	temp=(struct list*)malloc(sizeof(struct list));
	if(temp==NULL)
	{
		return;
	}
	temp -> data=n;
	temp ->next=NULL;
	return temp;
}
void insert()
{
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail -> next=temp;
		tail=temp;
	}
}
void display()
{
	for(struct list*tail=head;tail!=NULL;tail=tail ->next)
	{
		printf("%d",tail->data);
	}
}
int main()
{
	int n,val;
	printf("enter the number of values:\n");
	scanf("%d",&n);
	printf("enter the values:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val);
		create_node(val);
		insert();
	}
	printf("linked list:\n");
	display();
	return 0;
}

