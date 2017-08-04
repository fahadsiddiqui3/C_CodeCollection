#include<stdio.h>
main()
{
	char ch;int r1,r2,r3;
	printf("Enter a character:\n");
	ch=getchar(); ///contains the input
	(ch>='A')&&(ch<='Z')?printf("upper"):
	(ch>='a')&&(ch<='z')?printf("lowercase"):
	(ch>='0')&&(ch<='9')?printf("numeric"):printf("special character");
/*	!((r1)||(r2)||(r3))?printf("special\n"):printf("numeric\n"):printf("lowercase\n"):printf("Uppercase\n"):0;*/
}
