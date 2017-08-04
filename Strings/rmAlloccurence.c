#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	char *ptr;
	char ch;
	int cnt=0;
	puts("enter a string: ");
	gets(str);
ptr=str;
	puts("enter a character to remove all of its occurence: ");
	scanf("%c",&ch);
	
	while(ptr=strchr(ptr,ch))
	{
		cnt++;
		ptr++;
        
	
//	memmove(ptr,ptr+1,strlen(ptr+1)+1);
}
	printf("%d\n",cnt);



}
