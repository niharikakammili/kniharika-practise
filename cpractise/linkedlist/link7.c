#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list*next;
};
struct list *head=NULL,*tail=NULL
struct list*temp*new_node
struct list*create-node(int n)
{
	temp=(struct list*)malloc(struct list)
		if(temp==NULL)
		{
			return NULL;
		}
	temp ->data=n;
	temp ->next=NULL;
}
void insert_node()
{
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail ->next=temp;
		tail=temp;
	}
}
void display()
{
	for(struct list*t=head;t!=NULL;t=t->next)
	{
		printf("%d",t ->data);
	}
}
void insert_at_begin()
{
	new_node ->next=head;
	head=new_node;

}
int main()
{
	int n,val,val1;
	printf("enter the no of nodes:\n");
	scanf("%d",&n);
	printf("enter the nodes:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val);
		create_node(val);
		insert_node();
	}
	printf("linked list:\n");
	display();
	printf("enter the val1:\n");
	scanf("%d",&val1);
	insert_at_begin();
	display();
	return 0;
}



