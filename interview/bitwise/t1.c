#include<stdio.h>
int main()
{
	unsigned char n=0x12;
	int res;
	res=(n<<4)|(n>>4);
	printf("print the nibble swap 0x%x",res);
	return 0;
}

