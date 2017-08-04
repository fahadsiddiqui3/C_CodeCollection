#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *TOUPPER(char *p)
{
	static char *buf;
	static int flag=0;
	int i;
	if(flag==1)
	{
		return buf;
	}
	buf=malloc(strlen(p)+1);
	strcpy(buf,p);
	for(i=0;i<(strlen(buf));i++)
	if((buf[i]>='a')&&(buf[i]<='z'))
		buf[i]-=32;
	flag=1;

	return buf;

}

main(int argc,char **argv)
{
	FILE *fp;
	char *buf,*temp;
	int size;

	if(argc!=3)
	{
		printf("Usage: ./replace <string> <file> \n");
		return;
	}

	fp=fopen(argv[2],"r");
	if(fp==NULL)
	{
		printf("Replace: File not found\n");
		return;
	}
	fseek(fp,0,2);
	size=ftell(fp);
	 ///ftell gives the diffrnce b/w current ptr& base ptr
	fseek(fp,0,0);
	/////////////found size of file////////////////

	buf=(char*)calloc(1,size+1);
	fread(buf,size,1,fp);
	fclose(fp);

	////////////////file in buffer//////////////

	//search argv[1] in buffer//////////////
	temp=buf;
	while(temp=strstr(temp,argv[1]))
	{
	//////////replacing the string in buffer with uppercase/////
		strncpy(temp,TOUPPER(argv[1]),strlen(argv[1]));
		temp+=strlen(argv[1]);

	

	}
  	//////////////writing the updated buffer in file////////////
	fp=fopen(argv[2],"w");
	fwrite(buf,size,1,fp);
	fclose(fp);


}
