#include<stdio.h>
main()
{
	int a,sum=0,r;
	printf("Enter the intnumber");
	scanf("%d",&a);

	for(a;a>0;)  //for calculating sum//
	{
		r=a%10;
		sum=sum+r;
		a=a/10;
		
	}
	printf("%d",sum);
}

