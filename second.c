#include<stdio.h>
extern int x;
static int func3();
extern int func1(int);
func2()
{
        x++;
	printf("in func2 x=%d\n",x);
	printf("in func2 returned from func 1 value of x=%d\n",func1(x));
	printf("in func2 returned from static func3 x=%d\n",func3(x));
}
static int func3()
{
	printf("3....without increment %d\n",x);
        x++;
	printf("3......... x=%d\n",x);
	return x;

}
