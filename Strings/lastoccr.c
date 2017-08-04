#include<stdio.h>
#include<string.h>
///program to find the last occurence of s2 in s1

int lastoccurence(char *s1,char *s2)
{
	char *ptr;
	int i;
	ptr=s1;
	while(ptr=strstr(ptr,s2))
	{
		i=(ptr-s1);
		ptr++;

	}

	return i;

}

main()
{
	char s1[100];
	char s2[100];
	int pos;
	
	puts("Enter s1");
	gets(s1);

	puts("enter s2");
	gets(s2);

//	ptr=s1;

	pos=lastoccurence(s1,s2);


	printf("the last occurence is at %d\n",pos);

}
