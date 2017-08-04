#include<stdio.h>
main()
{
	char a[]="vector";
	char *e="abcxyz";
	printf("%s\n",a);
	printf("%s\n",e);
	
	printf("%s\n",a+2);
	printf("%s\n",e+3);

	printf("%c\n",*a+2);
	printf("%c\n",*e+3);

	printf("%c\n",a[4]);
	printf("%c\n",e[4]);

	printf("%c\n",++a[3]);
	printf("%c\n",e[4]);

	printf("%s\n",a);
	printf("%s\n",e);

}
