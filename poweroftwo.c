#include<stdio.h>
main()
{
	//program to check a given number is power of two or not
	int a=1,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(a<n)
	{
		a*=2;
	}
	if(a==n)
	printf("The given number is power of two\n");
	else
	printf("Not power of two\n");

	
}
