#include<stdio.h>
#include<string.h>
main()
{
	char s1[100]="abdbaaagdbhsdhjjjsbcdjdyu";
	char s2[100]="bcdj";
	char *ptr;
	ptr=strstr(s1,s2);
	if(ptr==NULL)
	puts("notfound");

	else	
	printf("found at %d\n",ptr-s1);



}
