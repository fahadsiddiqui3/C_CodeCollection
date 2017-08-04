#include<stdio.h>
//program to chech whether given number is positive or negative
main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	//using conditional execution operator
	//a>=0?printf("positive\n"):printf("negative\n");

	//using decision control statement
/*	if(a>0)
	printf("Positive\n");
	else
	printf("negative\n");
*/
	//using bitwise operator
	if(((a>>31)&1)==1)
	printf("negative\n");
	else printf("positive\n");
}
