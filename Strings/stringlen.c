#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i;
	printf("enter string: ");
	scanf("%[^\n]s",str);

	printf("len=%d\n",strlen(str));
	str[3]=0;
	printf("len=%d in string %s\n",strlen(str+4),str+4);
	printf("len=%d in string %s\n",strlen(str+1),str+1);
	printf("len=%d in string %s\n",strlen(str+3),str+3);
	

	///find length of string
/*	for(i=0;str[i];i++);
	printf("len=%d\n",i);
*/




}
