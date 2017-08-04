#include<stdio.h>
//program to find highest digit in a given number
int maxdig(int *num,int *max)
{
	static int dig;
	
	if (*num==0)
		return *max;	
	dig=*num%10;
	if(dig>=*max)
		*max=dig;
	*num=*num/10;
	maxdig(num,max);

	//	printf(" %d",max);
}
main()
{
	int num,max=0;

	printf("Enter the number:\n");
	scanf(" %d",&num);        
	max=maxdig(&num,&max);
	printf(" %d",max);
}
