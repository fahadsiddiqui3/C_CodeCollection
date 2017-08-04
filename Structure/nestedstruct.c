#include<stdio.h>
#pragma pack(1)
struct A{int a1;float a2;};
struct C{
 		struct A a;	
		struct B{
		int b1;
		float b2;
		}b;
	int c1;
	float c2;

};
void print(struct C v)
{

printf("%d %f %d %f %d %f\n",v.a.a1,v.a.a2,v.b.b1,v.b.b2,v.c1,v.c2);

}
void input(struct C *p)
{

	printf("Enter int: ");
	scanf("%d",&(p->a.a1));
	printf("Enter float: ");
	scanf("%f",&(p->a.a2));

	printf("Enter int: ");
	scanf("%d",&(p->b.b1));
	printf("Enter float: ");
	scanf("%f",&(p->b.b2));

	printf("Enter int: ");
	scanf("%d",&(p->c1));
	printf("Enter float: ");
	scanf("%f",&(p->c2));

}
main()
{
	struct C c;
	input(&c);
	print(c);
}
