#include<stdio.h>
#include<string.h>
//program to input a string and remove all non alphabets

main()
{
	char str[20];
	int i;
	puts("enter a string: ");
	gets(str);
	
	for(i=0;str[i];i++)
	{
    if(!( (str[i]>='a') && (str[i]<='z') )||( (str[i]>='A')&& (str[i]<='Z') ))
{
                      memmove(str+i,str+i+1,strlen(str+i+1)+1);
	i--;
	}
}
	printf("%s\n",str);

}
