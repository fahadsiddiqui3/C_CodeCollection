#include<stdio.h>
/*void print(int x,int y, int z)
{
	//XYZ are formal arguments and recieves copy of actual arguments abc//	
	printf("X=%d Y=%d Z=%d \n",x,y,z);
}*/

main()
{
	int a=10,b=3,c=5,d;
 //	d=(a,b=c,++c);

	//print(a=b,b++,a=--c);	

	printf(" %d %d %d \n",a<<1,a=b,a>>1);


}
