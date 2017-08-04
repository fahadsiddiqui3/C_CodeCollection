#include<stdio.h>
int x=8;
int func1();
extern func2();
main()
{
 printf("In main global variable x=%d\n",x);
 x++;
 printf("In main x=%d\n",x);
 func2();
}
int func1()
{
	x++;
	return x;
}
