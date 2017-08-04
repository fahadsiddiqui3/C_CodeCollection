#include<stdio.h>
main()
{
	float d=1.0;
	int v,*p,bit;
	p=&d;
	v=*p;
	for(bit=31;bit>=0;bit--)
	printf("%d",(v>>bit)&1);
	printf("\n");


}
