#include<stdio.h>
main()
{
	int dig,rev,a;
	printf("Enter the number");
	scanf("%d",&dig);
	for(dig;dig>=1;)
	{
	a=dig%10;
	rev=rev*10+a;
       }

 	printf("%d ",rev);

}
