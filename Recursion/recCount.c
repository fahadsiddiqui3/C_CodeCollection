#include<stdio.h>
// program to count no of digits in a given integer

int count(int dig)
{ 
    int cnt=0,num;
	if (dig==0)
	return 0;
	num=dig%10;
	cnt++;
        return cnt+count(dig/10);
      
	

}




main()
{
	int dig;
	printf("Enter number:");
	scanf(" %d",&dig);
	printf("%d",count(dig));

}
