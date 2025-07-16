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
void insertatbeginning(struct node**head,int data)
{
        struct node*newnode=createnode(data);
        newnode ->next=*head;
        *head=newnode;
}
void deleteatend(struct node**head)
{
        struct node*current=*head;
	while(current ->next ->next!=NULL)
	{
		current=current ->next;
	}

        free(current ->next);
        current->next=NULL;
}

int main()
{
        struct node*head=NULL;
        head=createnode(10);
        insertatbeginning(&head,20);
        insertatbeginning(&head,30);
        deleteatend(&head);
        struct node*temp=head;
        while(temp!=NULL)
        {
                printf("%d ->",temp ->data);
                temp=temp ->next;
        }
        printf("NULL");
}
             
