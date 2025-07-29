#include<stdio.h>
int main()
{
	int arr[4]={0};
	int n=(0x1234);
	int i;
	arr[0]=(n&0x000F);
	arr[1]=(n&0x00F0)>>4;
	arr[2]=(n&0x0F00)>>8;
	arr[3]=(n&0xF000)>>12;
	for(i=0;i<4;i++)
	{
		printf("%x",arr[i]);
	}
	return 0;
}

