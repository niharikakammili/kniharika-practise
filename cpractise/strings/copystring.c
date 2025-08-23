#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int i=0;
	//i is the counter variable
	printf("enter any string: ");
	fgets(str1,sizeof(str1),stdin);
	//fgets-read string from user
	//sizeof(str1) is reads uptp 99 characters
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	//copy each character until null character terminates
	str2[i]='\0';
	printf("first string=%s",str1);
	printf("second string=%s",str2);
	printf("total characters=%d\n",i);
	return 0;
}

