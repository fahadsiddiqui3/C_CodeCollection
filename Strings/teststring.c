#include<stdio.h>
char *vstrchr(char *str,char ch)
{
	while(*str)
	{
		if(*str==ch)
		return str;
		str++;

	}

return NULL;

}



main()
{
	char *ptr;
	char str[20]="fAhad";
	ptr=vstrchr(str,'A');
	if(ptr==NULL)
	printf("not found");
	else
	printf("found at %d\n",ptr-str);
	
	printf("%s\n",ptr);



}
