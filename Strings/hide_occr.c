#include<stdio.h>
#include<string.h>
void hideit(char *hide,char*s2)
{
	int i;
	for(i=0;s2[i];i++)
	{
		hide[i]='*';

	}
//	hide[i]='\0';

}

main()
{
	char s1[100];
	char s2[100];
	char hide[100];
	char *ptr;
	puts("enter s1");
	gets(s1);
	puts("enter s2");
	gets(s2);
	hideit(hide,s2);
	
	ptr=s1;
	while(ptr=strstr(ptr,s2))
	{
	//	memset(ptr,'*',strlen(s2));
		memmove(ptr,hide,strlen(hide));
		ptr++;

	}
	printf("%s\n",s1);

}
