#include<stdio.h>
// program to print factorial using recursion int
int fact(int num)
{
     if(num==0)
	return 1; 
        return (num * fact(num-1));



}




main()
{
	int num;
	printf("Enter number: ");
	scanf(" %d",&num);
	printf("%d\n",fact(num));

}
