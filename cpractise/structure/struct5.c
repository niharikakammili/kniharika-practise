#include<stdio.h>
struct book
{
	char title[50];
	char authour[50];
	float price;
};//declare 
int main()
{
	struct book book1,book2,book3;//3 book structs declared
	printf("enter the book1 details:\n");
	printf("Title");
	scanf("%s",book1.title);
	printf("Authour");
	scanf("%s",book1.authour);
	printf("Price");
	scanf("%f",&book1.price);
	printf("enter the book2 details:\n");
	printf("Title");
        scanf("%s",book2.title);
        printf("Authour");
        scanf("%s",book2.authour);
        printf("Price");
        scanf("%f",&book2.price);
	printf("enter the book3 details:\n");
	printf("Title");
        scanf("%s",book3.title);
        printf("Authour");
        scanf("%s",book3.authour);
        printf("Price");
        scanf("%f",&book3.price);
	struct book mostexpensivebook;
	if(book1.price>=book2.price && book1.price>=book3.price)
	{
		mostexpensivebook=book1;
	}
	else if(book2.price>=book1.price && book2.price>=book3.price)
	{
		mostexpensivebook=book2;
	}
	else if(book3.price>=book1.price && book3.price>=book2.price)
	{
		mostexpensivebook=book3;
	}
	struct book lowexpensivebook;
	if(book1.price<=book2.price && book1.price<=book3.price)
	{
		lowexpensivebook=book1;
	}
	else if(book2.price<=book1.price && book2.price<=book3.price)
	{
		lowexpensivebook=book2;
	}
	else if (book3.price<=book1.price && book3.price<=book2.price) 
	{
		lowexpensivebook=book3;
	}
	printf("title is:%s",mostexpensivebook.title);
	printf("authour is:%s",mostexpensivebook.authour);
	printf("price is:%.2f",mostexpensivebook.price);
	printf("lowexpensivebook is:\n");
	printf("title is:%s",lowexpensivebook.title);
        printf("authour is:%s",lowexpensivebook.authour);
        printf("price is:%.2f",lowexpensivebook.price);
        return 0;
}

	
	
