#include<stdio.h>
//programs on constant pointers
main()
{
	int v=50;
	 const int *const p;

	p=&v;
	*p=++(*p);
	printf("%d\n",v);


}
