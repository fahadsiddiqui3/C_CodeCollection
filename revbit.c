#include<stdio.h>
main()
{
	int data,i,j,r1,r2,a;
	printf("Enter the data to reverse the bits");
	scanf("%d",&data);
	for(i=7,j=0;i>j;i--,j++)
	{
		r1=(data>>i)&1;
		r2=(data>>j)&1;
		if(r1!=r2)
		{
		data^=(1<<i);
		data^=(1<<j);
		}
	}
	printf("%d\n",data);
}
