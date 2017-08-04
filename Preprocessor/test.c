typedef int INTEGER;
typedef int* INTPTR;

main()
{
	INTEGER a=10,b;
	INTPTR p,q;

	p=&a;
	q=&a;
	*q=*p;
	printf("%d %d",p,q);


}

