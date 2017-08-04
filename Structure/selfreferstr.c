#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct st{

	int a;
	float b;
	struct st *c;

	};
void print(struct st *p)
{
	while(p)
	{
	printf("%d %f\n",p->a,p->b);
	p=p->c;


	}



}


main(){
	struct st v1={11,22.2},v2={33,44.4},v3={55,66.6};
	v1.c=&v2;
	v2.c=&v3;
	v3.c=NULL;
	print(&v1);

	}
