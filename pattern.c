#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{	for(j=n;j<=i;j++)
		{ if(j<=(n-i))
		printf(" ");
		 else printf("* ");
	
		}
	}
}
