#include<stdio.h>
#include<string.h>

///program to remove all occurence of s2 from s1

main()
{
	char s1[100];
	char s2[100];
	char *ptr;

	puts("enter s1");
	gets(s1);
	
	puts("enter s2");
	gets(s2);

	ptr=s1;  // saving base address of s1 in ptr

	while(ptr=strstr(ptr,s2))
	{

		memmove(ptr,ptr+strlen(s2),strlen(ptr)-1);
//		memmove(ptr,ptr+strlen(s2),strlen(s1)-(ptr-s1)-1);
		ptr+=strlen(s2);

	}

	printf("%s\n",s1);

}
