#include<stdio.h>
#include<string.h>
main()
{
	char s1[100];
	char s2[100];
	int cnt=0;
	char *ptr;
	puts("Enter a string s1: ");
	scanf(" %s",s1);
	puts("Enter string s2: ");
	scanf(" %s",s2);
	ptr=s1;

	while(ptr=strstr(ptr,s2))
	{
		cnt++;
		ptr++;

        }
	printf("%d\n",cnt);
        
}
