#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*createnode(int dtata)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode ->data=data;
	newnode ->next=NULL;
	return newnode;
}
void deleteatbegining(struct node**head)
{
	struct node*current=*head;
	*head=head->next;
	free(current);
	current->next=NULL;
}
int main()
{
	struct node*head =NULL;
	head=createnode(10);
	deleteatbegining(&head);
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("%d ->",temp ->data);
		temp ->next =temp;
	}
	
}

