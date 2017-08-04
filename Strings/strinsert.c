#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
// program to input 2 strings1 and s2 and insert s2 in given position of s1
main()
{
	char s1[20],s2[20];
	int pos;
	puts("Enter s1: ");
	gets(s1);
	puts("Enter s2: ");
	gets(s2);
	printf("enter postion:");
	scanf("%d",&pos);
	memmove(s1+pos+strlen(s2),s1+pos,strlen(s1+pos)+1);
	strncpy(s1+pos,s2,strlen(s2));

	printf("%s\n",s1);



}
