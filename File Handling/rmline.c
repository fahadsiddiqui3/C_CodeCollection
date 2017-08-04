#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void checknum(char *p)
{
	if(*p>='0' && *p<='9')
		return;
	else {
	printf("Error:Non numeric Line number supplied\n");
	exit(0);
	}
}
main(int argc,char **argv)
{
	FILE *fp;
	char *buf=0,ch;
	int i,cnt=1,n,flag=0;
	int size,start,end;
	if(argc!=3)
	{
		if(argc==2){
			printf("Error: File name not supplied\n");
			return;}
		if(argc==1){
		printf("Error: File name and line number not supplied\n");
		printf("Usage: ./lineRm <File name> <line number>\n");
		return;
				}
	
		if(argc>3)
		{
			printf("Unwanted argument supplied\n");	
		printf("Usage: ./lineRm <File name> <line number>\n");
			return;
			}

	}
	checknum(argv[2]);
	n=atoi(argv[2]); //converting line number into integer

	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("Error: File not found\n");
		return;

	}	
	
	fseek(fp,0,2);
	size=ftell(fp);
	fseek(fp,0,0);

	buf=calloc(1,size+1);
	fread(buf,size,1,fp);
	fclose(fp);
	for(i=0;i<=strlen(buf);i++)
	{
		ch=buf[i];
		if(ch==10 || ch==0)
		{
		cnt++;
		}

		if(cnt==n && flag==0)
		{
			flag=1;
			start=i+1;
		}
		
		if(cnt==n+1){
		end=i;
		break;}

	}	
 	
	if(flag==0)
	{
		printf("Line not found\n");
		return;
	}

	memmove(buf+start,buf+end+1,strlen(buf+end+1)+1);
	n=strlen(buf);
	buf=realloc(buf,n);	

	fp=fopen(argv[1],"w");
	
	fprintf(fp,"%s",buf);
	
	fclose(fp);

}
