#include<stdio.h>
#include<string.h>
//program to input 3 string in s1 s2 s3 and copy all the string into a 4th array

main()
{
 	int i,j;
	char s1[20],s2[20],s3[20];
	char s4[60];
	puts("enter s1: ");
	gets(s1);

	puts("enter s2: ");
	gets(s2);

	puts("enter s3: ");
	gets(s3);

	//copy s1 into s4
//	for(i=0;s1[i];i++)
//	   s4[i]=s1[i];
 	strcpy(s4,s1);
	
	//copy s2 into s4
//	for(j=0;s2[j];j++,i++)
//	    s4[i]=s2[j];
//	strcpy(s4+strlen(s4),s2);
          strcat(s4,s2);	
	//copy s3 into s4
//	for(j=0;s3[j];j++,i++)
//	    s4[i]=s3[j];
//	    s4[i]=0;
//	strcpy(s4+strlen(s4),s3);
	strcat(s4,s3);
	printf("%s",s4);



}
