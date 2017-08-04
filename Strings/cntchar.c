///wap to count the occurence of character in a string using one for loop
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
	int i,j,cnt=0;
	char str[100],ch;
	printf("Enter string\n");
	scanf("%s",&str);
	j=strlen(str)-1;
	ch=str[j];
	
	for(i=0;str[i];i++)
	{
		if(ch==str[i])
		{
			cnt++;
			memmove(str+i,str+i+1,strlen(str+i)+1);
			--i;
			--j;

		}
		if(i==j)
		{
			printf("ch=%c...cnt=%d\n",ch,cnt);
			ch=str[j];
			i=-1;cnt=0;
		}



	}
	




}

