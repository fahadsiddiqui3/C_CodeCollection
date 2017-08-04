#include<stdio.h>
#include<string.h>
//removal of string 
main()
{
	char s1[20]="abcdefgh";
	char s2[15];
	
	strcpy(s2,s1+2);
	printf("%s\n",s2);

	strcat(s1+2,s2+1);
	printf("%s\n",s1);

	strcpy(s2+2,s1+3);
	printf("%s\n",s2);
	
	strcpy(s1+2,s1+4);
	printf("%s\n",s1);
	
	memmove(s2+11,s2+1,6);
	printf("%s\n",s2);


}
