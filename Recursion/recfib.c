#include<stdio.h>
//program to print fibonacci series upto n number using recursion
int fib(int n)
{
	if(n==1)
	return 0;
	if(n==2)
	return 1;
	return (fib(n-2)+fib(n-1));


}



main()
{
	int max,i;
	printf("Enter limit: ");
  	scanf("%d",&max);
	for(i=1;i<=max;i++)
	printf("%d ",fib(i));
        printf("\n");
}
