#include<stdio.h>
main()
{
	char str[20];
	int v=0,i,k;
	puts("Enter string");
	gets(str);

	for(i=0;str[i];i++)
	{
		if(str[i]=='.')			
			break;
			
		else
		v=v*10+str[i]-48;
	}
 	printf("%d\n",v);	
/*
	v++;
	printf("%d\n",v);
	v*=10;
	printf("%d\n",v);
*/
}
