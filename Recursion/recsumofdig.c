#include<stdio.h>
int sumd(int num);
main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Sum of digit is:%d\n",sumd(num));


}

int sumd(int num)
{
      static int sum=0;
	if(num>0)
	{ 
	    sum=sum+(num%10);
	    sumd(num/10);
	
	}

  return sum;
}
