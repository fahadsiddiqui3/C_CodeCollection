#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void checkarg(int argc)
{
	

	if(argc!=4)
	{
		if(argc==1) {
		printf("Error: Arguments not supplied\n");
		printf("Usage: ./replacew <word> <File> <word2replace>\n");
		return;   }

		if(argc==2) {
		printf("Error: file name & word2replace not supplied\n");
		printf("Usage: ./replacew <word> <File> <word2replace>\n");
		return;   }

		if(argc==3){
		printf("Error: word2replace not supplied\n");
		printf("Usage: ./replacew <word> <File> <word2replace>\n");
		return;   }
		
		else {	printf("Error: More than enough argument supplied\n");
			return;
			}
		

	}

}
int checkan(char ch)
{
	if( ch>='a'&& ch<='z')
	return 0;

	if( ch>='A'&& ch<='Z')
	return 0;
	
	if( ch>='0'&& ch<='9')
	return 0;

	else return 1;

}

main(int argc,char **argv)
{
	FILE *fp;
	char *buf,*ptr;
	int size,i,len1,len2;

	checkarg(argc);

	if((fp=fopen(argv[2],"r"))==NULL)
	{
		printf("Error: File not found\n");
		return;
	}

	fseek(fp,0,2);
	size=ftell(fp);
	rewind(fp);

	buf=calloc(1,size+1);
	fread(buf,size,1,fp);
	fclose(fp);

	len1=strlen(argv[1]);
	len2=strlen(argv[3]);
	ptr=buf;
	while((ptr=strstr(ptr,argv[1])))
	{
			if(checkan(ptr[-1]) && checkan(ptr[len1]))
			{			
			
			buf=realloc(buf,size+1+(len2-len1));
			memmove(ptr+len2,ptr+len1,strlen(ptr+len1)+1);
			strncpy(ptr,argv[3],len2);
			
			}
		ptr++;

	}
	

	fp=fopen(argv[2],"w");
	fprintf(fp,"%s",buf);
	fclose(fp);

}
