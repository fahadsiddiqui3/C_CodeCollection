#include<stdio.h>
main(int argc,char **argv)
{
	FILE *ptr;
	char ch;
	if(argc<2)
	{
		printf("ERROR:file name not suplied\n");
		printf("Usage:./fileRd<filename>\n");

	}
	ptr=fopen(argv[1],"r");
	if(ptr==NULL)
	{
		printf("File not found\n");
		return;
	}

	while((ch=fgetc(ptr))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(ptr);

}
