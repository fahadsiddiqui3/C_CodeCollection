#include<stdio.h>
#include<string.h>
int checkchar(char p)
{
	if((p>='a')&& (p<='z'))
	return 1;
	if((p>='A')&&(p<='Z'))
	return 1;
	if((p>='0')&&(p<='9'))
	return 1;
	else return 0;


}

main(int argc,char **argv)
{
	FILE *fp;
	int i,j,temp;
	char str[100];
	char *ptr;
	
	if(argc!=2)
	{
		printf("Usage: ./file sort <file name>\n");
		return;
	}

	fp=fopen(argv[1],"r+");
	if(fp==NULL)
	{
		printf("Error: File not found\n");
		return;
	}
	
	while(fgets(str,100,fp))
	{
		
		ptr=str;	
		for(i=0;i<(strlen(str)-1);i++)
		    for(j=0;j<(strlen(str))-1-i;j++)
			if(checkchar(ptr[j])  &&  checkchar(ptr[j+1]))
				if(ptr[j]>ptr[j+1])
					{
						temp=ptr[j+1];
						ptr[j+1]=ptr[j];
						ptr[j]=temp;
					}
	
	
		fseek(fp,-1*strlen(str),1);
		fputs(str,fp);

	}

	fclose(fp);


}
