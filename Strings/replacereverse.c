#include<stdio.h>
#include<string.h>
/*void insert(char *s2, char*temp)
{
	int i;
	for(i=0;s2[i];i++)
	temp[i]=s2[i];
	temp[i]='\0';
}
*/

void reverse(char *str,char *s2)
{
	char temp;
	int i,j;
	for(i=0,j=strlen(s2)-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}



main()
{
	char s1[100];
	char s2[100];
	char temp[100];
	char *ptr;
	puts("enter s1");
	gets(s1);
	puts("enter s2");
	gets(s2);

	strcpy(temp,s2);
	reverse(temp,s2);

	ptr=s1;
	while(ptr=strstr(ptr,s2))
	{
		memmove(ptr,temp,strlen(temp));
		ptr++;
	}		


	printf("%s\n",s1);
//	printf("%s\n",temp);

}
