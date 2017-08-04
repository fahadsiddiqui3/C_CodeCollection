#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i,cnt=0;
	puts("enter string: ");
	gets(str);
	while(*str==32) /// remove initial spaces
	memmove(str,str+1,strlen(str+1)+1);

	while(str[strlen(str)-1]==0)
	str[strlen(str)-1]=0;

	for(i=0;str[i];i++)
	{
		if(str[i]==' ' && str[i+1]==' ')
                       {
		            memmove(str+i,str+i+1,strlen(str+i+1)+1);
                        i--; 
        }
     } 
      printf("%s\n",str);
}
