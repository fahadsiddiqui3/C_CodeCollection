#include<stdio.h>
#pragma pack(1)
struct st{
	unsigned int day:5;
	unsigned int month:4;
	unsigned int year:15;

	}v;
main()
{
	int temp;
	printf("enter day");
	scanf("%d",&temp);
	v.day=temp;
	if(v.day<0)
	printf("Undefined day");
	else
	printf("%d\n",v.day);		


}

