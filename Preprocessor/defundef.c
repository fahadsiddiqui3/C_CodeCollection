#define A 1
main()
{
	extern int g;
	int v=A;
	printf("g=%d\n",g);
#undef A
#define A 2
	printf("%d\n",A);
#undef A
#define A 3
	printf("%d\n",v);

#undef A
#define A 4
 	printf("%d\n",v);


}
int g=A;
